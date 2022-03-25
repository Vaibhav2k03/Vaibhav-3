#include<stdio.h>
int main()
{
	int num,rem=0,rev=0,org;
	printf("Enter the number");
	scanf("%d",&num);
	org=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==org)
	{
		printf("The number is a palindrome");
	}
	else
	{
		printf("The number is not palindrome");
	}
	return 0;
}




