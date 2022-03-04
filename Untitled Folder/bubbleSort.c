#include <stdio.h>
int main()
{
	int arr[100],n,i,j,temp;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		//swap(&arr[min],&arr[i]);
		}
	}
	printf("\nThe Sorted Array is:");
	for(i=0;i<n;i++)
	{
		if(i==0)
		printf("%d",arr[i]);
		else
		printf(", %d",arr[i]);
	}
	return 0;
}
/*void swap(int*xp,int*yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
	//return 0;
}
void bubbleSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
	//return 0;
}
void printArray(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(i==0)
		printf("%d",a[i]);
		else
		printf(", %d",a[i]);
	}
	//return 0;
}*/
