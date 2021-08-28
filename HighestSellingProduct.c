/*Print an integer representing the total sales yalue of the two highest selling products on the Website.
Constraints
2 ≤ numProducts ≤ 106
Note
More than one product can have a similar sales value.
Example

Input

5

15 26 13 7 45  


45  26 = 71 

Output

71

Explanation

6 

9  8  6  3  2  10 

10 9 8 6 3 2 1 

arr[0]+arr[1]  => 10+9 => 19 

The two products with highest sales value are the second and the fifth products Hence the*/


#include<stdio.h> 
#include<math.h>
int main() 
{
    int n; 
    scanf("%d",&n); 
    int arr[n]; 
    int i,j; 
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i]; 
                arr[i]=arr[j]; 
                arr[j]=temp ;
            }
        }
    }
    
printf("%d",arr[0]+arr[1]);    
    
}
 
