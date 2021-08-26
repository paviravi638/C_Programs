/*The function deleteDuplicate(int* arr,int len) takes an array arr of length len ( len>0 ) as an input. 
It is supposed to remove duplicate integers from the input array arr such that for each distinct integer ,
the first occurence is retained and all duplicate elements following it are removed.*/


#include <stdio.h>
int count=0;
int a[100],b[100];
void deleteDuplicate(int n){

int c,d;
for (c = 0; c < n; c++)
{
for (d = 0; d < count; d++)
{
if(a[c] == b[d])
break;
}
if (d == count)
{
b[count] = a[c];
count++;
}
}
}
int main()
{
int n, c;
scanf("%d", &n);
for (c = 0; c < n; c++)
scanf("%d", &a[c]);
deleteDuplicate(n);
for (c = 0; c < count; c++)
printf("%d ", b[c]);
return 0;
}
