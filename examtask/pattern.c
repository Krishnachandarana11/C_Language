#include<stdio.h>

int main()
{
	int i,j;
	int num;
	
	for(i=11;i>=5;i++)	
	{				
		for(j=11;j<=i;j++)
		{		
			printf("%d",num++);
		}
		printf(" ");
	}
}
