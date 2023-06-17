#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the row");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=(2*i);j++){
        printf("*_");
        if(j%i==0){
            printf("\n");
        }
        }
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=2*i;j++){
            printf("*_");
            if(j%i==0){
                printf("\n");
            }
        }
    }
}