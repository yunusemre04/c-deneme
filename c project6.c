#include<stdio.h>
/*find odd or even numbers until integer n by the user entered and split odd numbers and even numbers 
and keep them different array then print on the screen.*/
int main(){
    int n,ts=0,cs=0;
    printf("select number of elements of the array : ");
    scanf("%d",&n);
    int array[n],csarray[n],tsarray[n];
    for (int i = 0; i < n; i++)
    {
      array[i]=i;
    }
    for (int j = 0; j < n ; j++)
    {
        if(array[j]%2==0){
             csarray[cs]=array[j];
               cs++;
        }
        else{
            tsarray[ts]=array[j];
            ts++;
        }
    }
     printf(" even numbers : ");
    for (int i = 0; i < cs; i++)
    {
        printf(" %d ",csarray[i]);
    }
     printf("\n odd numbers : ");
    for (int i = 0; i < ts; i++)
    {
        printf(" %d ",tsarray[i]);
    }
    

    
}