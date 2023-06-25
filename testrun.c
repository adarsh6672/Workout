#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<2*n;i++){
        i<=n?k++:k--;
        for(j=1;j<2*n;j++){
            if(k==n||j==n+k-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
        }
}
