/*Sum of n natural numbers*/


#include<stdio.h>
int findSum(int n) 
{ 
int sum = 0; 
for (int x=1; x<=n; x++) 
sum = sum + x; 
return sum; 
} 
int main() 
{ 
int n; 
scanf("%d",&n);
printf("%d",findSum(n)); 
return 0; 
}
