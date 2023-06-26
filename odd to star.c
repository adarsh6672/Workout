#include<stdio.h>
int main()
{
    int i,j,n,temp,num,pos,p;
    int a[15]={1,5,8,9,9,18,19,24,25,64};
    n=10;
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            a[i]='*';
        }
    }
    printf("the  array :");
    for(i=0;i<n;i++){
        if(a[i]=='*')
        printf("%c\t",a[i]);
        else
        printf("%d\t",a[i]);
    }
}