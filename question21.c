#include<stdio.h>
int main(void){
    int arr[100],mularr[100],i,n;
    printf("enter the limit of the array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        mularr[i]=arr[i]*arr[i+1];
    }
    printf("the output with multiplication of adjesent elements\n");
    for(i=0;i<n-1;i++){
        printf("%d ,",mularr[i]);
    }
    printf("\n");
}