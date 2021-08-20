/* Return the sum of elements of the input array matrix having m rows and n columns*/


#include<stdio.h>
#define SIZE 100
int matrixsum(int row,int col) {

 int sum=0;
 int arr[row][col];
 for(int i=0;i<row;i++){
 for(int j=0;j<col;j++)
 {
 scanf("%d",&arr[i][j]);
 }
 }
 for(int i=0;i<row;i++){
 for(int j=0;j<col;j++){
 sum=sum+arr[i][j];
 }
 }
 return sum;
}
int main() {
 int m,n;
 scanf("%d %d",&m,&n);


 printf("%d",matrixsum(m,n)); }
