#include<stdio.h>
int main(void){
    int i,j,k,n,x;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x=i;
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
        for(k=0;k<(2*i)-1;k++){
            if(k<i){
                 x--;
                printf("%d",x);
               
            }else{
                x++;
                printf("%d",x);
                
            }
        }
        printf("\n");
    }
}