#include<stdio.h>

main()
{
	int n;
	printf("Enter arrays size:-");
	scanf("%d",&n);
	
	int b[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter arrays elements:-");
		scanf("%d",&b[i]);
	}
	int *p;
	p=&b[0];
	
	for(i=0;i<n;i++)
	{
		*p=(*p)*(*p);
		printf("the square of each element is %d\n",*p++);
	}	
}
