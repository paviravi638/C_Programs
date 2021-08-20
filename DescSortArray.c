/*To arrange the input values in ascending order*/

#include<stdio.h>
int * descendingSortArray(int *arr, int len)
{
int small, pos, i, j, temp;
for(i = 0; i <= len-1 ; i++)
{
 for(j = i; j < len; j++)
 {
 temp = 0;
 if(arr[i] < arr[j])
 {
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }
 }
}
return arr;

}
int main()
{
int index, size;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
 scanf("%d",&arr[i]);
}
descendingSortArray(arr, size);
for(index = 0; index < size; index++)
 printf("%d " , arr[index]);
return 0;
}
