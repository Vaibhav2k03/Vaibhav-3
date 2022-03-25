#include <stdio.h>

int main()
{
	int a[20],i,n,j,temp=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d no of elements\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Unsorted  list\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	
	
	printf("Sorted list\n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
		
	return 0;
}

