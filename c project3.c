#include<stdio.h>
//write a matrix 3 by 3 with arrays by users entered
int main(){
int number,i,j;
int array[i][j];
printf("write nine numbers for matrix\n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
          scanf("%d",&number);
          array[i][j]=number;
    }
    puts("\n");
}
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
          printf("%d\t",array[i][j]);
          
    }
    puts("\n");
}

}