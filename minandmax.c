#include<stdio.h>
int main()
{
     int i,j,n,max,min;
    int a[15]={100,5,8,9,9,0,19,24,25,64};
    n=10;
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(max<=a[i]){
            max=a[i];
        }
        if(min>=a[i]){
            min=a[i];
        }
    }
    printf("minimum is :%d\n",min);
    printf("maximum is :%d",max);

}