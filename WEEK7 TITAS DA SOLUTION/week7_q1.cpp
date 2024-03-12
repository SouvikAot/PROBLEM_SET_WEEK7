#include<stdio.h>
int main()
{
	int arr1[20], arr2[20],arr3[20],max=0,size;
	printf("ENTER LENGTH OF BOTH ARRAY\n");
	scanf("%d",&size);
	printf("ENTER 1 St ARRAY \n");
	for(int i=0; i<size ;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("ENTER 2 ND ARRAY \n ");
	for(int i=0; i<size ;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	for(int i=0; i<size ;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	for(int i=0; i<size ;i++)
	{
		printf("%d\t",arr2[i]);
	}
	printf("\n");	
//	int arr3[20]=0;
	/////-----summing each pair and checking which one most value----------------------------------------------//
	for(int j=0 ;j<size; j++)
	{
		for(int k=0; k<size ;k++)
		{
		if((arr1[j]+arr2[k])>max)
		{
			max=arr1[j]+arr2[k];
		}
		}
	}
	printf("max value of given pair %d\t",max);
	
}
