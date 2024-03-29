#include<stdio.h>
main()

{
	int n,i;
	printf("size of Array Elements=");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter A Array Element=\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		
	}
	printf("Negative elements from an Array =");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		printf("%d ",a[i]);
		}
	}
	
}