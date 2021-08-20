/*Print the pattern using the * between two values
ex:
 6
3*3*3
2*2
1
1
2*2
3*3*3*/


#include <stdio.h> 
void printPattern(int r) 
{ 
 r = r / 2; 
int count = r; 
 for (int i = 0; i < r; i++) { 
  for (int j = r; j > i; j--) { 
 if (j != r) { 
 printf("*%d",count); 
}
else { 
 printf("%d",count);
} 
} 
count--; 
printf("\n"); 
}  
 count++;    
 for (int i = 0; i < r; i++) 
 {         
     for (int j = 0; j <= i; j++) 
     {                     
         if (j != 0) 
         {              
             printf("*%d",count);       
        }            
        else {          
            printf("%d",count);             
            
        }         
        }        
        count++;     
        printf("\n");  
    }
 }
 int main() 
 {
     int n;     
     scanf("%d",&n);     
     printPattern(n);    
     return 0;    
 } 
