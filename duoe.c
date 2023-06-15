#include<stdio.h>
int main(){
    int i,j,n;
    n=6;
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j<i){
                printf(" ");
            }else{
                if(i==j){
                    printf("1");
                }else{
                printf("%d ",j-i);
            }}
        }printf("\n");
    }
}