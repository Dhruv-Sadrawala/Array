//take a size of array from user and print even numbers form it with count
#include <stdio.h>
void main(){
	int n,i,a[20],count=0;

	printf("\nEnter the number of stduents \n");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter the marks of student %d\n",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
			printf("\na[%d]=%d\n",i+1,a[i]);
			count++;
		}
		printf("Count is: %d\n",count );		
	}
}