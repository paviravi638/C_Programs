/*Charlie has a magic mirror. The mirror shows right rotated versions of a given word. To generate different right-rotations of a word, 
write the word in a circle in clockwise order, then start reading from any given character in clockwise order till you have covered all the characters.
For example: In the word "sample", if we start with 'p, we get the right rotated word as "plesam". There are six such right rotations of "sample" including itself.
he inputs to the function n isSameReflection consists of two strings, word1 and word2. The function returns 1 if word1 and word2 are right rotations of the same word and -1 if they are not. 
Both word1 and word2 will strictly contain characters between 'a-z' (lower case letters).

Useful commands:
strlen is used to calculate the length of the string.
The statement - int len strlen(str);
returns the length of the string str.*/


#include<stdio.h>
#include<string.h>
#include<malloc.h>
int isSameReflection( char *s1,char*s2)
{
 char * str=NULL;
 str = (char *)malloc((strlen(s1)*2)+1);
 strcat(strcpy(str,s1),s1);
 if(strstr(str,s2)!=NULL)
 return 1;
 return -1;
}
int main()
{
 char word1[100],word2[100];
 scanf("%s %s",word1,word2);
 if(isSameReflection(word1,word2) == 1)
 printf("Yes");
 else printf("No");
 return 0;
}
