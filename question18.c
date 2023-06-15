#include<stdio.h>
#include<stdlib.h>
int main(void){
    float wt,lab,asmt,overall;
    printf("enter the mark sscored by student\n Written test");
    scanf("%f",&wt);
    printf("Lab exams=");
    scanf("%f",&lab);
    printf("Asssingments=");
    scanf("%f",&asmt);
    overall=(wt*70)/100+(lab*20)/100+(asmt*10)/100;
    printf("grade of the student=%f\n",overall);
}