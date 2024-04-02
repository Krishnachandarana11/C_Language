#include<stdio.h>

void main()
{
	FILE *dataptr;
	FILE *coppiedfileptr;
	char n;
	
	dataptr=fopen("data.txt","r");
	coppiedfileptr=fopen("coppiedfile.txt","w");
		
	if(dataptr==NULL && coppiedfileptr==NULL)
	{
		printf("files can't create...");
	}
	else
	{
		printf("files created successfully...");
			n=fgetc(dataptr);
		while(n!=EOF)
		{
			fputc(n,coppiedfileptr);
			n=fgetc(dataptr);
		}
	}
}
