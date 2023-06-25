#include<stdio.h>
int main()
{
    int i,j,n,k=0,x=1,d;
    printf("enter the row");
    scanf("%d",&n);
    for(i=1;i<=2*n;i++){
        i<=n?k++:k--;
        if(i>n){
          x=x-k-1;
         }
            if(i!=n){
        for(j=1;j<2*k;j++){
            if(j%2!=0){
                printf("%d",x);
                x++;
            }else{
                printf("*");
            }
        }
        printf("\n");
    }}
}