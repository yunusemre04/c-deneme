#include<stdio.h>
#include<string.h>
//Writing the code that prints the text entered by the user on the screen with a function and printing the length of the text
int main(){
char array[100];
printf("please write a text\n");
f(array);
 printf("text lenght is %d\n",strlen(array));

}

void f(char arrayf[]){
    gets(arrayf);
    printf("you wrote %s\n",arrayf);
}