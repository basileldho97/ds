#include <stdio.h>
int main()
{
	int p1[10],p2[10],p[10],n,n1,n2,i,j,sn,bn;
        
	printf("Enter the degree of first polynominal:  ");  //first polynominal
        scanf("%d",&n1);

        printf("Enter the coefficients first polynominal:\n");
        for(i=n1;i>=0;i--)
          scanf("%d",&p1[i]);




        printf("Enter the degree of second polynominal:  ");   //second polynominal
        scanf("%d",&n2);

        printf("Enter the coefficients second polynominal:\n");
        for(i=n2;i>=0;i--)
          scanf("%d",&p2[i]);

        if(n1>n2)                 //finding min&max degree
         {
           sn=n2;
           bn=n1;
         }
        else
         {
           sn=n1;
           bn=n2;
           }
        for(i=0;i<=sn;i++)        //addition
         p[i]=p1[i]+p2[i];

       
        for(i=sn+1;i<=n1;i++)
          p[i]=p1[i];

        for(i=sn+1;i<=n2;i++)
          p[i]=p2[i];
  
        printf("the sum of 2 polynominal is:  ");   //display
         for(i=bn;i>=0;i--)
          {
           printf("%dx^%d",p[i],i);
           if(i!=0)
           printf("+");
          }

        return 0;
}




       





        













