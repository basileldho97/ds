#include <stdio.h>
int main()
{
	int arr[100],n,i,j,min_idx,temp;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//selectionSort(arr,n);
	for(i=0;i<n-1;i++)
	{
	min_idx=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_idx])
			{
			min_idx=j;
			temp=arr[i];
			arr[i]=arr[min_idx];
			arr[min_idx]=temp;
			}
		}
		
	}
	printf("\nThe Sorted Array is:");
	for(int i=0;i<n;i++)
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
void selectionSort(int arr[],int n)
{
	int i,j,min_idx;
	for(i=0;i<n-1;i++)
	{
	min_idx=i
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_idx])
			{
			min_idx=j;
			}
		}
		swap(&arr[min_idx],&arr[i]);
	}
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
