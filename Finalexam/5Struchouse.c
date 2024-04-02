#include<stdio.h>

	struct House
{
	int room_quality;
	int established_year;
	char city[30];
};

int main()
{
	int i,n;
	struct House hou[3];
	
	printf("Enter the size:-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	
	printf("Enter the room_quality:-");
	scanf("%d",&hou[i].room_quality);
	printf("Enter established_year:-");
	scanf("%d",&hou[i].established_year);
	printf("Enter city:-");
	scanf("%s",hou[i].city);
	
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nroom_quality:- %d",hou[i].room_quality);
		printf("\nestablish_year:-%d",hou[i].established_year);
		printf("\ncity:-");
		puts(hou[i].city);
	}	
}

