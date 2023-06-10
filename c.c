#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n1,a1[100],temp,ele;
	printf("enter the limit of array");
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		printf("enter the element-%d \n",i);
		scanf("%d",&a1[i]);
	}
	printf("enter the element to enter ");
	scanf("%d",&ele);
	for(i=0;i<=n1;i++)
	{
			if(a1[i]>ele)
			{
				temp=a1[i];
				a1[i]=ele;
				ele=temp;
				a1[n1]=ele;
			}

	}
	printf("sorted array is \n");
	for(i=0;i<=n1;i++){
		printf("%d",a1[i]);
	}

return(0);
}

