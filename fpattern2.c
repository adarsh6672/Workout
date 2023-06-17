#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the raww number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("*\n");
        for(j=1;j<=3*i;j++){
            printf("*");
            if(j%3==0){
                printf("\n");
            }
        }
    }


}