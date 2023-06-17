#include<stdio.h>
int main(void){
    int i,j,n,a=65;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(a%2!=0){
                printf("%c",a+32);
            }else{
                printf("%c",a);
            }
            
            a++;
        }
        printf("\n");
    }

}