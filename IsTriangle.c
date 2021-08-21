/*You will have to implement the function isTriangle(Point p1,Point p2,Point p3) which accepts 3 points as input and checks whether the given 3 points 
form the vertices of a triangle If they form a triangle the function returns 1 else it returns 0*/


 #include<stdio.h>
int isTriangle(int point1, int point2, int point3)
{

if (point1 + point2 >= point3 || point1 + point3 >= point2 ||
point2 + point3 >=point1){
return 1;}
else{
return 0;
}}
int main()
{
int a, b, c;
scanf("%d %d %d",&a,&b,&c);
if (isTriangle(a, b, c)==1)
printf("Valid");
else
printf("Invalid");

}
