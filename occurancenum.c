/*Count the occourence of number*/


#include<stdio.h>
int countOccurences(int arr[],int val,int n)
{
 int count=0;
 for(int i=0;i<n;i++)
 {
 if(arr[i]==val){
 count++;
 }
 }
 return count;
}
int main(){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++)
{
 
 scanf("%d ",&arr[i]);
 }
 int val;
 scanf("%d",&val);
 printf("%d",countOccurences(arr,val,n));
}
