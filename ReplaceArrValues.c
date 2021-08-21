/*The function/method replaceValues accepts two arguments, the size of an array and the array. If the length of the array is odd, 
then you have to replace all the values by 1, else replace by 0.*/


#include<stdio.h>
int replaceValues(int arr[],int n)
{
int i=0; 
if(n%2!=0)
{ 
    while(i<n)
{ 
    arr[i]=1; i+=1; 
    
} 
    
} 
else
{ 
    int j=0; 
while(j<n)
{ 
    arr[j]=0; j+=1; 
    
}
}
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
}
int main()
{ int n; 
scanf("%d",&n); 
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]); 
    
} 
replaceValues(arr,n);
    
}
