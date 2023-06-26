#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the number :");
    scanf("%d",&n);
    k=n+1;
    for(i=2*n;i>=2;i--){
        i>n?k--:k++;
        for(j=1;j<=2*k-1;j++){
            if(j<k){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}
