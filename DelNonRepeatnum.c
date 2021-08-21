/*The function/method deleteNonRepeat removes the non-repeated integers from the inputList and prints the remaining 
repeated integers seperated by space from the inputList.If all the elements in the inputList are unique then the function/method 
deleteNonRepeated should not print anything. For example, for the given inputList [2, 3, 2, 2, 5, 6, 6, 7] , the expected output is 2 2 2 6 6.*/


#include<stdio.h> 
#include<stdlib.h>
void deleteNonRepeat(int* a,int n)
{

int count=0,i,j; int counter[n]; 
for(i=0;i<n;i++)
{ counter[i]=1;
} 
for(int i=0;i<n;i++)
{ 
    for(int j=i+1;j<n;j++)
    { if(a[i]==a[j])
    { counter[i]++; 
    counter[j]++; 
        
    }

} }
for(i=0;i<n;i++)
{ if(counter[i]>1) count++; 
    
} 
j=0; 
for(i=0;i<n;i++) 
if(counter[i]>1) 
printf("%d ",a[i]);


} 
int main()
{ int n; scanf("%d",&n); 
int* a = (int*)malloc(sizeof(int)*n); 
for(int i=0;i<n;i++)
{ scanf("%d",&a[i]); 
    
} deleteNonRepeat(a,n);
}
