/*The method countElement(int arr[],int n) of class ElementCount is supposed to return the number of elements in the input 
array arr which are greater than twice the input number n*/

#include<stdio.h>
int countElement(int arr[],int ele,int len)
{
 int count=0;
 for(int i=0;i<len;i++)
 {
 if(arr[i]>2*ele)
 {
 count++;
 }
 }
 return count;
}
int main()
{
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++)
 {
 scanf("%d ",&arr[i]);
 }
 int val;
 scanf("%d",&val);
 printf("%d",countElement(arr,val,n));
}
