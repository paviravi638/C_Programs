/*The function calculateGeneralLCM(int arr[]) of class GeneralizedLCM accepts an integer array arr. 
It is supposed to calculate and reurn the LCM of elements in the input array Another function calculateLCM(int a,int b) 
returns the LCM of two numbers a and b#include <stdio.h> int gcd(int a, int b)*/



#include <stdio.h>
int gcd(int a, int b)
{
{
if (a == 0)
return b;
return gcd(b % a, a);
}
int calculateLCM(int a, int b)
{
return (a*b)/gcd(a, b);
}
int calculateGeneralLCM( int arr[],int n){
int x = calculateLCM(arr[0],arr[1]);
for(int i=2;i<n;i++){
x = calculateLCM(x,arr[i]);
}
return x;
}
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("%d",calculateGeneralLCM(arr,n));
return 0;
}
