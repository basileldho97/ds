#include<stdio.h>
int main()
{
int a[50][50],m,n,i,j,size=0;
printf("enter the no. of rows & columns of matrix:\n");
scanf("%d",&m);
scanf("%d",&n);
printf("enter the elements in the matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]!=0)
size++;
}

int x[size][3],k=0;

for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(a[i][j]!=0)
{
x[k][0]=i;
x[k][1]=j;
x[k][2]=a[i][j];
k++;
}

printf("row\tcolumn\tvalue\n");
for(i=0;i<size;i++)
{
for(j=0;j<3;j++)
printf("%d\t",x[i][j]);
printf("\n");
}
return 0;
}
