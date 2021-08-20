/*Fibonnaci series pattern for the given input*/


#include<stdio.h>
int fib(int n) {
if(n<=1)
 return n;
return(fib(n-1)+fib(n-2));
}
int main() {
int i,j,k=1,rows;
scanf("%d",&rows);
for (i=1;i<=rows;i++) {
for (j=1;j<=i;j++) {
printf("%d ",fib(k++));
}
printf("\n");
}
return 0;
}
