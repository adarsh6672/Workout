#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=i-1;
        for(j=1;j<2*n;j++){
            
            if(j<=n-i||j>=n+i){
                printf(" ");
            }else{
                j<=n?k++:k--;
                printf("%d",k);
            }
            }
            printf("\n");
    }
}