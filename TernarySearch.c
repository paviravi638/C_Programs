/*A ternary search tree is defined as a ternary tree in which a search, proceed character by character, compares the current character in the search string with 
the character at the current node if the search character is lexicographically larger , the search goes to the right child. When the search character is equal, 
the search goes to the middle child and proceeds to the next character in the search string. For example, ternary search tree for strings cat, cats, up, bug.
The function/method insertIntoTernaryTree accepts three arguments – tree representing a ternary tree, inputStr, a String representing the index of the current 
character in inputStr. The function/method is supposed to return the ternary tree node after inserting the word into the tree*/


#include <stdio.h> 
#include <stdlib.h> 
#define MAX 50 
struct Node 
{ 
char data; 
unsigned isEndOfString: 1; 
struct Node *left, *eq, *right; 
}; 
struct Node* newNode(char data) 
{ 
struct Node* temp = (struct Node*) malloc(sizeof( struct Node )); 
temp->data = data; 
temp->isEndOfString = 0; 
temp->left = temp->eq = temp->right = NULL; 
return temp;

return temp; 
} 
void insert(struct Node** root, char *word) 
{ 
if (!(*root)) 
*root = newNode(*word); 
if ((*word) < (*root)->data) 
insert(&( (*root)->left ), word); 
else if ((*word) > (*root)->data) 
insert(&( (*root)->right ), word); 
else
{ 
if (*(word+1)) 
insert(&( (*root)->eq ), word+1); 
else
(*root)->isEndOfString = 1; 
} 

} 
void traverseTSTUtil(struct Node* root, char* buffer, int depth) 
{ 
if (root) 
{ 
traverseTSTUtil(root->left, buffer, depth); 
buffer[depth] = root->data; 
if (root->isEndOfString) 
{ 
buffer[depth+1] = '\0'; 
printf( "%s\n", buffer); 
} 
traverseTSTUtil(root->eq, buffer, depth + 1); 
traverseTSTUtil(root->right, buffer, depth); 
} 
} 
void traverseTST(struct Node* root) 
{ 
char buffer[MAX]; 
traverseTSTUtil(root, buffer, 0); 
} 
int searchTST(struct Node *root, char *word) 
{ 
if (!root) 
return 0; 
if (*word < (root)->data) 
return searchTST(root->left, word); 
else if (*word > (root)->data) 
return searchTST(root->right, word); 
else
{ 
if (*(word+1) == '\0') 
return root->isEndOfString; 
return searchTST(root->eq, word+1); 
} 
}

int main() 
{ 
struct Node *root = NULL; 
insert(&root, "cat"); 
insert(&root, "cats"); 
insert(&root, "up"); 
insert(&root, "bug"); 
printf("Following is traversal of ternary search tree\n"); 
traverseTST(root); 
printf("\nFollowing are search results for cats, bu and cat respectively\n"); 
searchTST(root, "cats")? printf("Found\n"): printf("Not Found\n"); 
searchTST(root, "bu")? printf("Found\n"): printf("Not Found\n"); 
searchTST(root, "cat")? printf("Found\n"): printf("Not Found\n"); 
return 0; 
} 
