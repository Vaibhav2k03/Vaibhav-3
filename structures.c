#include <stdio.h>
int main()
{
	int n, i , avg;
	struct student
	{
		int rollno, eng, math, science, sst, lan1,lan2;
		char name[20];
		float avg;
	};
	
	struct student s[20];
	printf("Enter the number of students:\n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter students %d details:\n",i+1);
		printf("Enter roll no:\n");
		scanf("%d",&s[i].rollno);
		
		printf("Enter student name\n ");
		scanf("%s",s[i].name);
		
		printf("Enter the marks of eng, math, science, sst, lan1, lan2\n");
		scanf("%d",&s[i].eng);
		scanf("%d",&s[i].math);
		scanf("%d",&s[i].science);
		scanf("%d",&s[i].sst);
		scanf("%d",&s[i].lan1);
		scanf("%d",&s[i].lan2);
	}
	
	
	for (i=0; i<n; i++)
	{
		s[i].avg=(s[i].eng + s[i].math+ s[i].science+ s[i].sst + s[i].lan1 + s[i].lan2 )/6;
		
	}
	
	printf("Enter the average marks:");
	scanf("%d",&avg);
	
	for (i=0;i<n;i++)
	{
		
		if (s[i].avg>avg)
		{
			printf("Student scored above avg:");
			printf("%s\n",s[i].name);
		}
		else
		{
			printf("Student scored below avg:");
			printf("%s\n",s[i].name);
		}
	
	}
	return 0;
}
