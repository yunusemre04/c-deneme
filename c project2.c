#include<stdio.h>
//find the number is a prime number or not by the user entered
int main(){
    int number;
    printf("please enter a number\n");
    scanf("%d",&number);
    if(number<=0){printf("please enter a positive integer");
        scanf("%d",&number);}
    else if(number==1){
        printf("1 isn't a prime number\n");
        return 0;
    }
for (int i = 2; i <number/2; i++)
{
    if(number%i==0){printf("The number isn't prime number");
    return 0;
    }
}
  printf("The number is a prime number");
return 0;
}