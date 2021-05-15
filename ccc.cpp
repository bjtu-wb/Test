#include <stdio.h> 
int main()
{
	int a[10],n,i,j,k,min,max;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=n-1;j>=1;j--)
	{
		min=a[j];
		if(a[j]<a[j-1])
		{
			a[j]=a[j-1];
			a[j-1]=min;
		}
	}

	for(k=0;k<n-1;k++)
	{
		max=a[k];
		if(a[k]>a[k+1])
		{
			a[k]=a[k+1];
			a[k+1]=max;
		}
	}
	printf("After swapped:");		
	for(i=0;i<n;i++)			
		printf("%d ",a[i]);	
	
	return 0;
	
}
