/*Generate all the prime numbers below a given range*/

#include<stdio.h>
#include<math.h>
int main(){
 int n;
 scanf("%d",&n);
 int arr[n-1];
 int sqr=sqrt(n)+1;
 for(int i=0;i<n-1;i++){
 arr[i]=i+2;
 }
 for(int i=0;arr[i]<=sqr;i++){
 if(arr[i]==0){
 continue;
 }
 for(int j=i+arr[i];j<n-1;j+=(arr[i])){
 arr[j]=0;
 }
 }
for(int i=0;i<n-1;i++){
 if(arr[i]!=0){
 printf("%d ",arr[i]);
 }
}
}
