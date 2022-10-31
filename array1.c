//take size of array from user and print all the even numbers from it
#include <stdio.h>
void main(){
	int n,i,a[20];

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
		}
	}
}