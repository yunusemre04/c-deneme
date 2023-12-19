#include<stdio.h>
//code that sorts the elements in the array by the users entered

int main(){
    int es,temp;
    printf("select number of array's elements\n");
    scanf("%d",&es);
    int array[es];
for (int  i = 0; i < es; i++)
{ printf("Select the value of the %d. element: ",i+1);
    scanf("%d",&array[i]);
}
 for (int j= 0; j<es-1; j++)
 {
    for (int k = 0; k < es-j-1; k++)
    {
        if(array[k]>array[k+1]){
         temp=array[k];
         array[k]=array[k+1];
         array[k+1]=temp;
        }
    }
 }
 for (int z = 0; z < es; z++)
 {
    printf("%d ",array[z]);
 }
 
 
 
  



}