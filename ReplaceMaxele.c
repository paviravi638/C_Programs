/*The function maxReplace (int *arr,int len) is supposed to replace every element of the input array arr of length len,
with the maximum element of arr.*/


#include<stdio.h>
int* maxReplace(int *arr, int len)
{
 int i, max;
 if(len>0)
 {
 //
 max=arr[0];
 for(i=0;i<len;i++)
 {
 // int dummy;
 if(max<arr[i])
 max=arr[i];
 }
 // dummy = 100;
 }
 for(i=0;i<len;i++)
 arr[i]=max;
 return arr;
}
int main()
{
int size, ind;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
 scanf("%d",&arr[i]);
}
maxReplace(arr, size);
for(ind = 0; ind < size; ind++)
 printf("%d ", arr[ind]);
}
