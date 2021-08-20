/*The function/method rotateList accepts three arguments as inputs - an integer size, an integer k and a node list_head representing size of the list, 
the rotation index value and the head node of the linked list, respectively. It is supposed to rotate the linked list in the counterclockwise direction from the kth node.*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;
NODE *start;
void displaySLL()
{
 NODE *tptr;
 for(tptr=start;tptr!=NULL;tptr=tptr->next)
 printf("%d ",tptr->data);
 printf("\n"); }
void insertData(int givenData) {
 struct node *newnode;
 NODE *tptr,*prev;
 newnode=(struct node *)malloc(sizeof(struct node));
 newnode->data=givenData;
 newnode->next=NULL;
 if(start==NULL)
 {
 start=newnode;
 }
 else
 {
 for(tptr=start;tptr!=NULL;prev=tptr,tptr=tptr->next);
 prev->next=newnode;
 } }
void rotate(int n,int k,NODE *head) {
 NODE *tptr,*prev,*safeNext,*safePrev;
 int count;
 tptr=head;
 for(count=1;count<k;count++)
 {
 prev=tptr;
 tptr=tptr->next;
 }
 safePrev=NULL;
 while(tptr!=NULL)
 {
 safeNext=tptr->next;
 tptr->next=safePrev;
 safePrev=tptr;
 tptr=safeNext;
 }
 prev->next=safePrev;
}
int main() {
 int n,k,index,num;
 scanf("%d %d",&n,&k);
 for(index=0;index<n;index++)
 {
 scanf("%d",&num);
 insertData(num);
 }
 rotate(n,k,start);
 displaySLL();
 return 0;
}
