/* C program for Palindrome half pyramid pattern printing using numbers */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,k,l,n;
printf(“Enter the number of rows : “);
scanf(“%d”,&n);
for(i = 1; i <= n; i++)
{
for(k = 1; k <= i; k++)
{
printf(“%d “,k);
}
for(l = i-1; l >= 1; l–)
{
printf(“%d “,l);
}
printf(“\n”);
}
return 0;
}



/* C program for Palindrome half pyramid pattern printing using alphabets */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,k,l,n;
printf(“Enter the number of rows : “);
scanf(“%d”,&n);
for(i = 1; i <= n; i++)
{
for(k = 1; k <= i; k++)
{
printf(“%c “,(k + 65 – 1));
}
for(l = i-1; l >= 1; l–)
{
printf(“%c “,(l + 65 – 1));
}
printf(“\n”);
}
return 0;
}



/*Program to print palindrome pyramid pattern using numbers*/

#include <stdio.h>
int main()
{
int i, j, k, space, n;
scanf(“%d”, &n);
printf(” “);
for (i=1; i<=n; i++)
{

for (j=1; j<=n-i; j++)
printf(” “);

for (j=1,k=2*i-1; j<=2*i-1; j++,k–)
{
if (j <= k)
printf(“%d”, j);
else
printf(“%d”, k);
}
printf(“\n”);

printf(” “);

}
return 0;
}



/*Program to print palindrome pyramid pattern using numbers & stars*/

#include<stdio.h>
int main()
{
int n, i, j, space, count = 1, num = 0, star = 8;
scanf(“%d”, &n);
space = n;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= star; j++)
if(i + j <= star + 1)
printf(“*”);
num++;
for (j = 1; j <= i; j++)
{
printf(“%d”, num);
if (i > 1 && count < i)
{
printf(“*”);
count++;
}
}
for (j = 1; j <= star; j++)
if(i + n <= j + n)
printf(“*”);
printf(“\n”);
space–;
count = 1;
}
return 0;
}
