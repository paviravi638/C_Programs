/*Chemicals,the consistent rate of change; and the Nth second for which the scientist wishes to 
calculate the total energy produced, respectively.

Output

Print an integer representing the total energy produced by the Nth second.

Example

Input:

5 3 3
5->e 
3->r 
3->t 

1 st second =>  5 

2 nd second =>  5+3 = 8 

3 rd second =>  8+3 = 11 

5+8+11 = 24 


Output:

24

Explanation:


For N=1, an initial energy of 5 is generated.

For N= 2, a consistent rate of 3 is added, so it becomes 8.

For N-3, again 3 is added to previous energy value, so it becomes 11.


7  4  5 
7 -> e 
4 -> rate of change  
5 -> time in seconds 

1 st sec ->  7 
2 nd sec ->  11 
3 rd sec ->  15
4 th sec ->  19  
5 th sec ->  23 

7+11+15+19+23 =>   75  */



#include<stdio.h> 
#include<math.h>
int main() 
{
    int e,r,t; 
    scanf("%d %d %d",&e,&r,&t);  //3 2 3 
    int total=0,i,k=0; 
    for(i=1;i<=t;i++)  //i=1 ; 3<=3 ; 3
    {
        total=total+e;    //toatal=15   
        k=r; //k=2;
        e=e+k;  //e=7  
    }
    printf("Total energy is : %d",total);
    
    
    
}
 












































