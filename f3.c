#include<stdio.h>
int main(){
    int i,j,n;
    printf("give number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=6*i;j++){
            printf("*");
            if(j%(3*i)==0){
                printf("\n");
            }
        }
        if(i!=n){
            printf("*\n");
        }
    }
}