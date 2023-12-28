//find the average of five numbers entered by users entered
#include<stdio.h>
int main(){
    float total,number;
    for (int  i = 0; i < 5; i++)
    {
       printf("sayı girin\n");
       scanf("%f",&number);
       total+=number; 
    }
    float conclusion=total/5;
    printf("The average is = %.2f",conclusion);
}
