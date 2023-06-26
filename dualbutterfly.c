#include<stdio.h>
int main()
{
    int i,j,k=0,n;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<2*n;i++){
        i<=n?k++:k--;
        for(j=1;j<=2*n;j++){
            if((j>=k && j<=n)||(j>=n+k && j<=2*n)){
                printf("* ");
            }else{
                if(j>=n&&j<=n+k){
                    printf("  ");
                }else{
                printf(" ");
                }
            }
        }
        printf("\n");
    }
}