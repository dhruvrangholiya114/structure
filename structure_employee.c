#include<stdio.h>

struct employees
{
	int id,age,experience;
	char name[100];
	char role[100];
	char city[100];
	char comp_name[100];
}s[100];

main()
{
	int a;
	int i,n;
	
	printf("Enter the size of employee array :- ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter employee ID Number :- ",s[i].id);
		scanf("%d",&s[i].id);
		printf("Enter employee name :- ",s[i].name);
		scanf("%s",&s[i].name);
		printf("Enter employee age :- ",s[i].age);
		scanf("%d",&s[i].age);
		printf("Enter employee role :- ",s[i].role);
		scanf("%s",&s[i].role);
		printf("Enter employee city :- ",s[i].city);
		scanf("%s",&s[i].city);
		printf("Enter employee experience :- ",s[i].experience);
		scanf("%d",&s[i].experience);
		printf("Enter employee company name :- ",s[i].comp_name);
		scanf("%s",&s[i].comp_name);
	}
	printf("\n=====================================================\n");
	for(i=0;i<n;i++)
	{
		printf("Employee Id is %d\n",s[i].id);
		printf("Employee Name is %s\n",s[i].name);
		printf("Employee Age is %d\n",s[i].age);
		printf("Employee Role is %s\n",s[i].role);
		printf("Employee City is %s\n",s[i].city);
		printf("Employee Experience is %d\n",s[i].experience);
		printf("Employee Company Name is %s\n",s[i].comp_name);	
	}	
}
