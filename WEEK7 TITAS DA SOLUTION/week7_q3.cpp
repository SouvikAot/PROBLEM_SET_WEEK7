#include<stdio.h>
int main()
{
	int n,arr[50], temp[80];
	printf("ENTER SIZE\n");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS\n");
	for(int i=0; i< n;i++)
	{
		scanf("%d",&arr[i]);
	}
	///////////array sorting
	for(int i=0; i<n;i++)
	{
		int var;
		for(int j=i+1;j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				var=arr[i];
				arr[i]=arr[j];
				arr[j]=var;
			}
		}
	}
	printf("AFTER SORTING\n");
	for(int i=0; i< n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	int j=0;
	////rearrange
	for(int i=0; i<n; i++)
	{
		if(arr[i]==i)
		{
			temp[i]=arr[i];
		}
		else
		{
			temp[i]=-1;
		}
	}
	//print output
	printf("FINAL OUTPUT ARRAY\n");
	for(int i=0; i< n;i++)
	{
		printf("%d",temp[i]);
	}

}
