#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the raw no\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            printf("*\n");
        }
        for(k=1;k<=i*3;k++){
            printf("* ");
            if(k%3*1==0){
                printf("\n");
            }
        }
    }

}