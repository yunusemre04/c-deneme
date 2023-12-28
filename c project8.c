#include<stdio.h>
/*Take three lecture grade of three student by users entered then print on the screen 
average of lectures and total of 1st student's 1st exam grade and 2nd student's 2nd exam grade 
and 3rd grade of the 3rd student*/
int main(){


 int grade[3][3];
 for (int  i = 0; i < 3; i++)
 { 
    for (int j = 0; j < 3; j++)
    {
        printf("please enter the %d. grade for %d. student\n",i+1,j+1);
        scanf("%d",&grade[i][j]);
    }
    
 }

 int total=0;
   for (int i = 0; i < 3; i++)
   {int j=0;
    for ( int j = 0; j < 3; j++)
    {
     printf("%d. student %d. grade is  %d\n",i+1,j+1,grade[i][j]);   
       
    }
    j=i;
    total+=grade[i][j];
    puts("\n");
   }

   printf("total is %d\n\n",total);
   float agrade;
   for (int j = 0; j < 3; j++)
   {
    agrade=0;
    for (int i = 0; i < 3; i++)
    {    
        agrade+=grade[i][j];
        
    }
    agrade/=3;
    printf("average grade for %d.lecture = %.2f\n",j+1,agrade);
   }

}