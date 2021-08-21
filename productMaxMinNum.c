/*The function/method productValues which accepts three arguments. num1 , num2 and num3. Find the maximum of three numbers and the minimum of three numbers.
And return the product of maximum and minimum numbers.*.


#include<stdio.h> 
int productValues(int num1,int num2,int num3){

int min,max; 
max = (num1>=num2)&&(num1>=num3)?num1:(num2>=num3)&&(num2>=num1)?num2:num3; 
min = (num1<=num2)&&(num1<=num3)?num1:(num2<=num3)&&(num2<=num1)?num2:num3; 
return max*min;


} 
int main()
{ int num1,num2,num3; 
scanf("%d %d %d",&num1,&num2,&num3); 
printf("%d",productValues(num1,num2,num3));

}
