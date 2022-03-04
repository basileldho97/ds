#include<stdio.h>
#include<stdlib.h>
struct node
{
int data ;
struct node * next;
};
struct node *h,*p,*q,*temp,*todelete,*current;

void insertfirst()
{
int x;
printf("enter no.:");
scanf("%d",&x);
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=h;
h=temp;
temp=NULL;
printf("node is inserted at first");
}
void insertlast()
{
int x;
printf("enter no.:");
scanf("%d",&x);
temp=(struct node*)malloc(sizeof(struct node));
current=h;
temp->data=x;
temp->next=NULL;
if(h==NULL)
h=temp;
else
{
while(current->next!=NULL)
current=current->next;
current->next=temp;
}
temp=NULL;
current=NULL;
printf("node is inserted at last");
}


struct node * search_list()
{
int x;
printf("enter no.:");
scanf("%d",&x);
current=h;
while(current!=NULL && current->data!=x)
current=current->next;
return current;
}

struct node * del_node()
{
int x;
printf("enter no.:");
scanf("%d",&x);
if(h==NULL)
{
printf("list is empty");
return h;
}
current=h;
if(h->data==x)
{
h=h->next;
current->next=NULL;
free(current);
current=NULL;
printf("value deleted");
return h;
}
while(current->next!=NULL && current->next->data!=x)
current=current->next;
if(current->next!=NULL)
{
todelete=current->next;
current->next=todelete->next;
todelete->next=NULL;
free(todelete);
todelete=NULL;
current=NULL;
printf("value deleted");
return h;
}
current=NULL;
printf("value not exist");
return h;
}

void display(struct node*h)
{
current=h;
printf("values in list are:");
while(current!=NULL)
{
printf("%d",current->data);
current=current->next;
}
}
int main()
{
int x,m,a;
do
{
printf("choose the ooeration to  be performed:\n1.INSERTION AT FIRST\n2.INSERTION AT LAST\n3.SEARCHING\n4.DELETION\n5.DISPLAY\n ");
scanf("%d",&m);
switch(m)
{
case 1: insertfirst();  
        break;
case 2: insertlast();
        break;
case 3: p=search_list();
        if(p==NULL)
        printf("value not found");
        else
        printf("value found");
        break;
case 4: h=del_node();
        break;
case 5: display(h);
        break;
default : printf("select a valid option");
          break;
}
printf("\n enter 1 for continue:");
scanf("%d",&a);
printf("\n----------------\n");
}
while(a==1);
return 0;
}























