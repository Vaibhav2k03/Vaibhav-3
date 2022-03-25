#include <stdio.h>
#include <math.h>
int main()
{	
	int n,i;
	float a[20],*p,mean=0,var=0,sd=0,sum=0;
	printf("Enter n:\n");
	scanf("%d",&n);
	
	printf("Enter array elements\n");
	p=a;
	for (i=0;i<n;i++)
	{
		scanf("%f\n",p);
		p++;
	}
	
	printf("Array elements are:\n");
	p=a;
	for (i=0;i<n;i++)
	{
		printf("%f\n",*p);
		p++;
	}
	
	p=a;
	for (i=0;i<n;i++)
	{
		sum=sum+*p;
		p++;
	}
	
	mean=sum/n;
	
	printf("mean=%f\n",mean);
	
	p=a;
	for (i=0;i<n;i++)
	{
		var=var+ pow((*p-mean),2);
		p++;
	}
	var=var/n;
	printf("Varience=%f\n",var);
	
	
	sd=sqrt(var);
	printf("standard deviation= %f\n",sd);

	return 0;
}
