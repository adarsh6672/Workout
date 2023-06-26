#include<stdio.h>
int main()
{
    int i,j,n,temp,num,pos,p;
    int a[15]={1,5,8,9,9,18,19,24,25,64};
    printf("enter the number to enter: ");
    scanf("%d",&num);
    n=10;
    n++;
    printf("enter the position:");
    scanf("%d",&pos);
    p=pos-1;
    for(i=n-1;i>p;i--){
        a[i]=a[i-1];
    }
    a[p]=num;
       printf("the sorted array :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }


}