#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=n;i>1;i--){
        for(j=1;j<=(2*i)-1;j++){
            printf("X");
            if(j%i==0){
                printf("\n");
            }
        }
        printf("\n");
        if(i!=2){
        for(k=1;k<=2;k++){
            printf("X\n");
        }}
    }
}