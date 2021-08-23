/*The function/method reverseLinkedList accepts one argument – list, representing the head of a singly linked list and is supposed

to reverse the second half of the linked list.
For example, if the list is 2 -> 3 -> 6 -> 1 -> 4 -> 8 -> 9 -> 7
Then the resulting list would be 2 -> 3 -> 6 -> 1 -> 7 -> 9 -> 8 -> 4*/

#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
static void reverse(struct Node** head_ref)
{

struct Node* prev = NULL;
struct Node* current = *head_ref;
struct Node* next = NULL;
while (current != NULL) {
next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head_ref = prev;
}
void push(struct Node** head_ref, int new_data)
{
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
}
void printList(struct Node* head)
{
struct Node* temp = head;
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}
}
int main()
{
struct Node* head = NULL;
int n;
scanf("%d",&n);
int x;
for(int i=0;i<n;i++){
scanf("%d",&x);
push(&head, x);
}
printf("Given linked list\n");
printList(head);
reverse(&head);
printf("\nReversed Linked list \n");
printList(head);
getchar();
}
