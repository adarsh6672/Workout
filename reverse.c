#include<stdio.h>
int main()
{
    int i,j,n,temp,num,pos,p;
    int a[15]={1,5,8,9,9,18,19,24,25,64};
    n=10;
    num=n-1;
    for(i=0;i<num;i++){
        temp=a[i];
        a[i]=a[num];
        a[num]=temp;
        num--;
    }
     printf("the  array :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}