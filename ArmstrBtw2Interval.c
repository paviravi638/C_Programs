/*
Armstrong Numbers Below the Intervals

Write a C Program to Display Armstrong Number Between Two Intervals
If there is no elements print No elements

Input Format
Input contains the start and end range
Output Format
Print the values separated by space
Constraints
1 <= start < end <= 1000000
Sample Input
100 500 
Sample Output
153 370 371 407

Sample Input
10 100

Sample Output
No elements

*/


#include<stdio.h> 
#include<math.h>
int isarmstrong(int num,int c) 
{   
    int temp,ans,sum=0,dig;
    temp=num;
    while(num)  
    {
        dig=num%10;  
        ans=pow(dig,c);  
        sum=sum+ans; 
        num=num/10;  
        
    }
    if(sum==temp)
      return 1;
    else 
      return 0;
}
int main()
{
    int start,end,i,temp,c,ans,a=0;
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++)  
    {  
       temp=i;
       c=0;
       while(temp)
       {
          temp=temp/10;
          c++;
       }
      ans=isarmstrong(i,c);
      if(ans==1)
      {
        a=1;
        printf("%d ",i);
      }
      
    }
   if(a==0)
     printf("No element");
     
}














