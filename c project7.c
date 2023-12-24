#include<stdio.h>
#include<string.h>
//Keep students information with structs and print on the screen
float f(float midterm,float final){
float grade=midterm*40/100+final*60/100;
return grade;
}

int main(){
 typedef struct Students
 {
    char*firstname;
    char*lastname;
    int age;
    float grade;

 }STUDENT;
  
  float x,y;
  printf("please enter the grade of midterm : ");
  scanf("%f",&x);
  printf("please enter the grade of final : ");
  scanf("%f",&y);
  
 STUDENT student1={"Ali","Kaya",20,f(x,y)};
 printf("%s %s %d %.2f\n",student1.firstname,student1.lastname,student1.age,student1.grade);

  printf("please enter the grade of midterm : ");
  scanf("%f",&x);
  printf("please enter the grade of final : ");
  scanf("%f",&y);

 STUDENT student2={"Mert","Deniz",22,f(x,y)};
 printf("%s %s %d %.2f",student2.firstname,student2.lastname,student2.age,student2.grade);

}
