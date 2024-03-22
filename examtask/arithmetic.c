#include<stdio.h>

int main()
{
	int a,b;
	int sum;
	printf("Enter the value of A:-");
	scanf("%d",&a);
	printf("Enter the value of B:-");
	scanf("%d",&b);
	
	sum=(a+b);
	printf("sum of addition is %d",sum);
	sum=(a-b);
	printf("\nsum of substraction is %d",sum);
	sum=(a*b);
	printf("\nsum of multiplication is %d\n",sum);
	sum=(a/b);
	printf("sum of division is %d",sum);
}
