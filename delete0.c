#include<stdio.h>
int main()
{
    int i,j,n,temp,right;
    int a[15]={0,0,8,9,0,0,0,24,25,0};
    n=10;
    right=n-1;
    for(i=0;i<right;i++){
        if(a[i]==0){
            temp=a[i];
            for(j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            a[right]=temp;
            right--;
            i--;
        }
    }
       printf("the array :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}