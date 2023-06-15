#include<stdio.h>
#include<stdlib.h>
int main(void){
    float ai,it;
    printf("enter your annual income\n");
    scanf("%f",&ai);
    if(ai<=250000){
        printf("No income tax");
    }
    else if(ai>250000 && ai<=500000){
        it=ai*5/100;
        printf("Income tax is %f\n",it);
    }
    else if(ai>500000 && ai<=1000000){
        it=ai*20/100;
        printf("Income tax is %f\n",it);
    }
    else if(ai>1000000 && ai<=5000000){
        it=ai*30/100;
        printf("Income tax is %f\n",it);
    }
    else{
        printf("invalid entry\n");
    }
}