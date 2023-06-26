#include<stdio.h>
int main()
{
    int i,j,n,temp,num,pos;
    int a[15]={1,5,8,9,9,18,19,24,25,64};
    printf("enter the number to enter: ");
    scanf("%d",&num);
    n=10;
    n++;
    for(i=0;i<n;i++){
        if(num<=a[i]){
            pos=i;
            break;
        }else{
            pos=n-1;
        }
    }

        for(j=n-1;j>pos;j--){
            
                a[j]=a[j-1];
            
        }
        a[pos]=num;

        
    
    printf("the sorted array :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}