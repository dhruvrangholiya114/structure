#include<stdio.h>

struct students
{
	int id,age,std;
	char name[100];
	char course[100];
	char city[100];
	char school[100];
}s[100];

main()
{
	int a;
	int i,n;
	
	printf("Enter the size of students array :- ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Student ID Number :- ",s[i].id);
		scanf("%d",&s[i].id);
		printf("Enter Student name :- ",s[i].name);
		scanf("%s",&s[i].name);
		printf("Enter Student age :- ",s[i].age);
		scanf("%d",&s[i].age);
		printf("Enter Student course :- ",s[i].course);
		scanf("%s",&s[i].course);
		printf("Enter Student city :- ",s[i].city);
		scanf("%s",&s[i].city);
		printf("Enter Student standard :- ",s[i].std);
		scanf("%d",&s[i].std);
		printf("Enter Student school :- ",s[i].school);
		scanf("%s",&s[i].school);
	}
	printf("\n=====================================================\n");
	for(i=0;i<n;i++)
	{
		printf("Student Id is %d\n",s[i].id);
		printf("Student Name is %s\n",s[i].name);
		printf("Student Age is %d\n",s[i].age);
		printf("Student Course is %s\n",s[i].course);
		printf("Student City is %s\n",s[i].city);
		printf("Student Standard is %d\n",s[i].std);
		printf("Student School is %s\n",s[i].school);	
	}	
}

