#include <stdio.h>
int btod(int);
int main ()
{
	int bin,dec;
	printf("Enter binary number:\n");
	scanf("%d",&bin);
	
	dec= btod(bin);
	
	printf("The decimal of binary value %d is %d",bin,dec);
	return 0;
}


int btod(int bin)
{
	if (bin==0)
	{
	 return 0;
	}
	else 
	return bin%10+btod(bin/10)*2;
}
