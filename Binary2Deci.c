/*Convert Binary to decimal*/


#include<stdio.h>
int binarytodecimal(int number)
{
int dval=0, base=1, rem;
while(number > 0)
{
rem = number % 10;
dval = dval + rem * base;
number = number / 10;
base = base * 2;
}
return dval;
