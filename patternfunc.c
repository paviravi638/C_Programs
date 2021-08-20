/*The function patternPrint(int n) supposed to print n, in numberof lines*/


#include<stdio.h>
void patternPrint(int num)
{
 for(int i=0;i<num;i++){
 for(int j=0;j<=i;j++){
 printf("1");
 }

 printf("\n");
 }

}
int main()
{
 int n;
 scanf("%d",&n);
 patternPrint(n);
}
