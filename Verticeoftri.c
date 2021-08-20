/*You will have to implement the function isTriangle(Point p1,Point p2,Point p3) which accepts 3 points as input and checks whether
the given 3 points form the vertices of a triangle.If they form a triangle the function returns 1 else it returns 0 */


#include<stdio.h> 
int checkValidity(int a, int b, int c) 
{ 
if (a + b <= c || a + c <= b || b + c <= a) 
return 0; 
else
return 1; 
} 
int main() 
{ 
int a, b, c; 
scanf("%d %d %d",&a,&b,&c);
if (checkValidity(a, b, c)) 
printf("Valid"); 
else
printf("Invalid"); 
}
