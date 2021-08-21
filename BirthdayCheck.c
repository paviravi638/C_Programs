/*Lisa always forgets her birthday which is on the 5 th July In order to help her, we have a class BirthDay having a method 
checkBirthDay(String month,int day) which takes day and month as inputs and return Yes if it is her birthday else return No*/


#include<stdio.h>
#include<string.h>
int checkBirthday(char *month,int day)
{
if(strcmp(month,"july") == 0 && (day -5) == 0)
return 1;
else
return 0;
}
int main()
{
char month[10];
scanf("%s",month);
int day;
scanf("%d",&day);
if(checkBirthday(month,day)==1)
printf("Yes");
else
printf("No");
return 0;}
