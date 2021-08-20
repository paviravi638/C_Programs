/* To calculate and return the median of elements in the input array*/


#include <stdio.h>
#include<stdlib.h>
float findMedian(int* a, int n)
{
 for(int i=0;i<n;i++){
 for(int j=i+1;j<n;j++){
 if(a[i]>a[j]){
 int temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
 }
if (n % 2 != 0)
return (float)a[n/2];
return (float)(a[(n-1)/2] + a[n/2])/2.0;
}
int main()
{
 int n;
 scanf("%d",&n);
 int* a;
 a=(int*)malloc(sizeof(int)*n);
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 printf("%f",findMedian(a,n));
return 0;
} 
