#include<stdio.h>
int main(void){
    int n,i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=2*i;j++){
            printf("* ");
        }printf("\n");
        for(k=0;k<=3*i;k++){
            if(i!=3){
                printf("*\n");
            }
        }
    }
}