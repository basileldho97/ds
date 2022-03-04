#include <stdio.h>
int main()
{
	int arr[100],n,i,j,key;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		key=arr[i];
		for(j=i-1;j>=0&&arr[j]>key;j--)
		{
		arr[j+1]=arr[j];
		//arr[j+1]=key;
		}
	arr[j+1]=key;
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
void insertionSort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
	key=arr[i];
	j=i-1;
	while(j>=0&&arr[i]>key)
	{
	arr[j+1]=arr[j];
	j=j-1;
	}
	arr[j+1]=key;
	}
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
