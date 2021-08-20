/*To find the index value of number using key*/


#include<stdio.h>
 #include<stdlib.h>

int ndIndex(int len,int list,int key){

  for(int i=0;i<len;i++){

    if(list[i]==key){

     printf("%d", i);

    }
    

  }return 0;

}

int main(){

  int len;

  scanf("%d",&len);

  int* list = (int*)malloc(sizeof(int)*len);

  for(int i=0;i<len;i++){

    scanf("%d",&list[i]);

  }

  int key;

  scanf("%d",&key);

  printf("%d",ndIndex(len,list,key));

}
