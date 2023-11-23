#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],i,k,j,r;
	printf("enter dimenssion of array>>\n");
	scanf("%d%d",&j,&r);
	printf("\nenter %d values\n",j*r);
	for(i=0;i<j;i++)
	{
		for(k=0;k<r;k++)
		scanf("%d",&a[i][k]);
	}
	printf("\nvalues of array\n");
	for(i=0;i<j;i++)
	{
		for(k=0;k<r;k++)
		printf("%d\t",a[i][k]);
		printf("\n");
	}
		
	for(i=0;i<j;i++)
	{
		for(k=0;k<r;k++)
		b[k][i]=a[i][k];
	}
	printf("After transpose>>>\n");
	for(i=0;i<r;i++)
	{
		for(k=0;k<j;k++)
		printf("%d\t",b[i][k]);
		printf("\n");
	}
		
}
