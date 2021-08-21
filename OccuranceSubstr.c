/*
Count the occurrence of substring

Find the occurrence of a sub string in a parent string 

Input Format
Input contains the string and the sub string
Output Format
print the count
Constraints
1<=substring_length <= string_length<=1000
Sample Input
hgjghjhab
ab 

Sample Output
1
*/


#include<stdio.h> 
#include<stdlib.h>
int substring(char *str1,char *str2,int len1,int len2)
{
    int **mat,c=0,row,col;
   mat=(int**)calloc(len2+1,sizeof(int*));  
    for(row=0;row<=len2;row++)  
      mat[row]=(int*)calloc(len1+1,sizeof(int)); 
    for(row=0;str2[row]!='\0';row++) //a b c
    {
        for(col=0;str1[col]!='\0';col++)  //
           if(str2[row]==str1[col])   //str2[0]==str1[]  --> a==a
             {
                mat[row+1][col+1]=mat[row][col]+1;   //mat[1][1]=1 
                if(mat[row+1][col+1]==len2)
                   c++;
             }
    }
    return c;
    
}
int main()
{
    char str1[100],str2[100];
    int  len1,len2,ans;
    scanf("%s %s",str1,str2);  //abchnababc    abc
    for(len1=0;str1[len1]!='\0';len1++); //
    for(len2=0;str2[len2]!='\0';len2++); 
    ans=substring(str1,str2,len1,len2);
    printf("%d",ans);
    
}


































