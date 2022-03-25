#include <stdio.h>
#include <string.h>
int main()
{
	char str[100],ch;
	int i, sum =0;
	
	printf("Enter the string\n");
	gets(str);
	
	printf("Enter the character\n");
	scanf("%c",&ch);
	
	for(i=0;i<strlen(str);i++)
	{
		if(ch==str[i])
		{
			sum=sum+1;
		}
	
	}

	printf("Number of Occurence:%d",sum);
	return 0;
}
