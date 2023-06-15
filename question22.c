#include<stdio.h>
int getArray(int a[10][10],int x,int y);
int addArray(int a[10][10],int b[10][10],int x,int y,int sum[10][10]);
void displayArray(int sum[10][10],int x,int y);

int main()
{
    int arr[10][10],arr2[10][10],sum[10][10];
    int r,c ,i,j;
    printf("enter the no of rows\n");
    scanf("%d",&r);
    printf("enter the no of coloumns\n");
    scanf("%d",&c);
    getArray(arr,r,c);
    getArray(arr2,r,c);
    addArray(arr,arr2,r,c,sum);
    displayArray(sum,r,c);
    }


int getArray(int a[10][10],int x,int y){
    int i,j;
    printf("enter elements\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    return a;
}
int addArray(int a[10][10],int b[10][10],int x,int y,int sumar[10][10]){
        int i,j;
        printf("adding....................\n");
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                sumar[i][j]=a[i][j]+b[i][j];
            }
    }
    
    
}
void displayArray(int a[10][10],int x,int y){
    int i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}