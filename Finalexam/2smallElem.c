#include<stdio.h>

main()
{
	int n;
	printf("Enter the array element:-");
	scanf("%d",&n);
	int i,min;
	int array[n];
	for(i=0;i<n;i++)
	{
		printf("array element");
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("%d is the smallest value",min);
}
