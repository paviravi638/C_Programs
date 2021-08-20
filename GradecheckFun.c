/*Check grade using function*/

#include<stdio.h>
void checkGrades(int marks){
 if(marks>=91){
 printf("A");
 }
 else if(marks>=76 && marks<=90){
 printf("B");
 }
 else if(marks>=61 && marks<=75){
 printf("C");
 }
 else{
 printf("D");
 }
 
}
int main()
{
 int marks;
 scanf("%d",&marks);
 checkGrades(marks);
} 
