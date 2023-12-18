#include<stdio.h>
#include<string.h>
//Kullanıcın girdiği yazıyı ekrana yazdıran kodu fonksiyonla yazma ve yazının uzunluğunu yazdırma
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