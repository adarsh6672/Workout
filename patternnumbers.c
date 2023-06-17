#include<stdio.h>
int main(void)
{
    int i,j,k,n;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=i){
                printf("%d",j);
            }else{
                printf(" ");
            }
        }
        for(k=n;k>=1;k--){
            if(k>i){
                printf(" ");
            }else{
                printf("%d",k);
            }
        }printf("\n");
    }
}