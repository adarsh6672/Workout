#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j,k,n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for (i=1;i<=n;i++)  {       
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=n;k++){
            if(i==1||i==n||k==1||k==n)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    
}