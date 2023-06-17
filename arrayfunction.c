#include<stdio.h>
int main(){
    int r,c,arr[10][10];
    printf("enter the number of rows\n");
    scanf("%d",&r);
     printf("enter the number of coloumns\n");
    scanf("%d",&c);
    arr=callarray(r,c);


}
callarray(int x,int y){
    int i,j;
    int a[10][10];
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                scanf("%d",&a[i][j]);
            }

        }
        return a;
}