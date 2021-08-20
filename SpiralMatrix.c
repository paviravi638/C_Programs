/*Print the spiral of the matrix*/


#include<stdio.h>
#include<string.h>
#include<math.h>
void spiralPattern(int n){
int size=2*n-1;
 int arr[size][size];
 int u=0,l=0,b=size,r=size,val=n;
 while(l<r && u<b){
 for(int i=l;i<r;i++){
 arr[u][i]=val;
 }
 u++;
 for(int i=u;i<b;i++){

 arr[i][r-1]=val;
 }
 r--;
 for(int i=r-1;i>=l;i--){
 arr[b-1][i]=val;
 }
 b--;
 for(int i=b-1;i>=u;i--){
 arr[i][l]=val;
 }
 l++;
 val--;
 }
 for(int i=0;i<size;i++){
 for(int j=0;j<size;j++){
 printf("%d ",arr[i][j]);
 }
 printf("\n");
 }


}
int main()
{
 int n;
 scanf("%d",&n);
 spiralPattern(n);
}
