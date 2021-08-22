/*The function findMaxElement(int arr1[] ,int len1,int arr2[],int len2) accepts two integer arrays arr1,arr2 of length len1,len2 respectively. 
It is supposed to return the largest element in both the input arrays.Another function sortArray(int *arr,int len) sorts 
the input array arr of length len in ascending order and returns the sorted array*/


#include<stdio.h>
#include<stdlib.h>
int * sortArray(int *arr, int length)
{
int x=0,y=0,n=length;
for(x=0;x<n;x++)
{
int index_of_min = x;
for(y=x;y<n;y++)
{
if(arr[index_of_min]>arr[y])
{
index_of_min=y;
}
}
int temp=arr[x];
arr[x]=arr[index_of_min];
arr[index_of_min]=temp;
}
return arr;
}
void findMaxElement(int arr1[],int arr2[],int len1,int len2){
int index;
sortArray(arr1,len1);
sortArray(arr2, len2);
int max=0;
if(arr1[len1-1]>arr2[len2-1]){
max=arr1[len1-1];
}
else{
max=arr2[len2-1];
}
printf("%d",max);
}
int main()
{
int len1,len2;
scanf("%d %d",&len1,&len2);
int arr1[len1],arr2[len2];
for(int i=0;i<len1;i++){
scanf("%d",&arr1[i]);
}
for(int i=0;i<len2;i++){
scanf("%d",&arr2[i]);
}
findMaxElement(arr1,arr2,len1,len2);
return 0;
}
