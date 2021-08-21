/*The method removeElement(int arr[],int element) of class ShortArray takes an array arr as an input.It is supposed to return an array removing the integer
if it is present in the input array arr. If the given integer is not in the array, then this function should return the input array arr*/


#include<stdio.h>
int deleteElement(int arr[], int n, int x)
{
if (arr[n-1] == x)
return (n-1);
int prev = arr[n-1], i;
for (i=n-2; i>=0 && arr[i]!=x; i--)
{
int curr = arr[i];
arr[i] = prev;
prev = curr;
}
if (i < 0)
return 0;
arr[i] = prev;
return (n-1);
Footer
}
int main()
{
 int n;
 scanf("%d",&n);
int arr[n];
 for(int i=0;i<n;i++){
 scanf("%d ",&arr[i]);
 }
int x;
 scanf("%d",&x);
n = deleteElement(arr, n, x);
for (int i=0; i<n; i++)
printf("%d ",arr[i] );
return 0;
}
