#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the no of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(k==i)
            printf("%d",1);
            else
            printf("%d ",k);
        }
        printf("\n");
    }
}