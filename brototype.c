#include<stdio.h>
void printString(char *p,int n){
    if(n>0){
        printf("%s\n",p);
        n--;
        printString(p,n);
    }
}
int main(){
    char s[10];

    printf("enter the word\n");
    scanf("%s",s);
    char *p=s;
    printString(p,8);

}