#include<stdio.h>   
int* Bubble_Sort(int[][]);  
void main ()    
{    
    int arr[2][2] = { 
        {1,8},{9,4}
    };     
    int *p = Bubble_Sort(arr), i;  
    printf("printing sorted elements ...\n");  
    for(i=0;i<10;i++)  
    {  
        printf("%d\n",*(p+i));  
    }  
}    
int* Bubble_Sort(int a[][]) //array a[] points to arr.   
{  
int i, j,temp[10][10];     
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
           temp[i][j]=a[i][j];
        }     
    }     
    return a;  
}  