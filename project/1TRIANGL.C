#include<stdio.h>
#include<conio.h>
main()
{
	int first,second,third,x;
	clrscr();
	printf("first value is:-");
	scanf("%d"
	,&first);
	printf("second value is:-\n");
	scanf("%d",&second);
	x=180-first-second;
	printf("third valueis %d\n",x);
	getch();
	return 0;
}
