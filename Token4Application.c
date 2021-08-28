/*Write an algorithm to generate the token number from the applicant ID.
Input
The input consists of an integer applicant!! representing the application ID of the
applicant.
Output
Print an integer representing the token
number.
Constraint
0<applicantID ≤ 109
Note
0 is considered as an even digit and 1 Is considered as an odd digit.
Example
Input
245567
Output
354476
34896  

e
7  

1245 

pow(10,3)  ->1000 

5 -> 1 th place  
4 -> 10 th place 
2 -> 100 th place 
1 -> 1000 th place  

 (1245/1000)  = 1%10  -> 1  
 (1245/100)   = 12%10 -> 2 
 (1245/10)    = 124%10 -> 4 
 (1245/1)     =1245%10 -> 5 
 
 1000/10  100/10  10/10  1/10  pv=0  stop   
 567  
 count=3 
 pow(10,count-1)   => 100 */
 
 
 
 #include<stdio.h> 
#include<math.h>
int main() 
{
    int app,count; 
    scanf("%d%n",&app,&count); //app=1235   count=4 
    int pv=pow(10,count-1);  //pv=1000; 
    int rem; 
    while(pv>0)
    {
        rem=(app/pv)%10;   //rem=2    
        if(rem%2==0) //2 even 
        {
            printf("%d",++rem);  //3 
        }
        else 
        {
            printf("%d",--rem);
        }
        pv=pv/10;  //pv=0 
    }
    
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




















