/*Mr. Jason has captured your friend and has a collar around his neck. He has locked the collar with a given “locking key". 
Now it can only be opened with an “unlocking key”. Your friend sees the locking key but he does not know how to find unlocking key.
You can calculate the unlocking key if you have the locking key, because the unlocking key will be the smallest (in magnitude) permutation of the digits of the locking key and will never start with zero. 
Help your friend write an algorithm that outputs the unlocking key by taking key as an input.*/


#include<stdio.h>
int unlock(int num)
{
 int arr[10],index=0,n,result=0,temp;
 int itr;
 while(num)
 {
 arr[index]=num%10;
 index++;
 num=num/10;
 }
 n=index;
 for(itr=1;itr<=n-1;itr++)
 {
 for(index=1;index<n;index++)
 {
 if(arr[index-1] > arr[index])
 {
 int temp=arr[index];
 arr[index]=arr[index-1];
 arr[index-1]=temp;
 }
 }
 }
 index=0;
 while(arr[index]==0)
 index++;
 temp=arr[index];
 arr[index]=arr[0];
 arr[0]=temp;
 for(index=0;index<n;index++)
 {
 result=result*10+arr[index];
 }
 return result;
}
int main()
{
 int num,res;
 scanf("%d",&num);
 res=unlock(num);
 printf("%d",res);
 return 0;
}
