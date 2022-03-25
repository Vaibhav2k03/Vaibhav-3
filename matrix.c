#include <stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],p,q,m,n,i,j,k;
	printf("Enter the order of matrix A(p*q)");
	scanf("%d%d",&p,&q);
	printf("Enter the order of matrix B(m*n)");
	scanf("%d%d",&m,&n);
	if (q!=m)
	{
		printf("matrix multiplication not possible");
		return 1;
	}
	
	
	//INPUT FOR MATRIX "A"//
	
	printf("Enter matrix A");
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Matrix A:\n");
	
	
	//PRINT VALUE OF MATRIX "A"//
	
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	
	
	//INPUT FOR MATRIX "B"//
	
	printf("Enter matrix B");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	
	
	//PRINT VALUE OF MATRIX "B"//
	
	printf("Matrix B:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	
	
	
	//MULTIPLICATION OF MATIX "A" & "B" As "C"//
	
	for (i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
		{
			C[i][j]=0;
			for(k=0;k<q;k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	
	
	
	//PRINTING VALUE OF MATRIX"C"//
	printf("Matrix C:\n");
	for (i=0;i<p;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
