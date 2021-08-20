/*Two integers A and B. The task is to count how many numbers in the interval [ A, B ] have an odd number of divisor.*/

#include<stdio.h>
int OddDivCount(int a, int b) 
{ 
int res = 0; 
for (int i = a; i <= b; ++i) { 
int divCount = 0; 
for (int j = 1; j <= i; ++j) { 
if (i % j == 0) { 
++divCount; 
} 
} 
if (divCount % 2) { 
++res; 
} 
} 
return res; 
} 
int main() 
{ 
int a, b; 
scanf("%d%d",&a,&b);
 printf("%d",OddDivCount(a,b));
return 0; 
} 
