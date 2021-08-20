/*Encoding the string*/


#include<stdio.h>
#include<string.h>
#include<math.h>
void encodeString(char arr[],char alpha[],int num[]){
 int front=-1,rear=-1;
 int len=strlen(arr);
 alpha[++rear]=arr[0];
 num[rear]=1;
 for(int i=1;i<len;i++){
 if(arr[i]==alpha[rear]){
 num[rear]++;
 }
 else{
 alpha[++rear]=arr[i];
 num[rear]=1;
 }
 }
 while(front!=rear){
 ++front;
 printf("%c%d",alpha[front],num[front]);
 }
}
int main(){
 char arr[1000];
 scanf("%s",arr);
 char alpha[1000];
 int num[1000];
 encodeString(arr,alpha,num);
}
