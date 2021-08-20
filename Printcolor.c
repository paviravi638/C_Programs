/*The function printcolor(int num) is supposed to point names of accordind to the given input number num When the values of num equal 1,2,3,4 the function 
points “red”,”black”,”white”,”green” respectively.for any other values num it should print “No Color”*/


#include<stdio.h>
void printcolor(int num) {
 switch(num) {
case 1:
printf("Red");
break;
case 2:
printf("Black");
break;
case 3 :
printf("White");
break;
case 4:
printf("Green");
break;
default:
printf("No color");
break; }}
int main() {
 int num;
 scanf("%d",&num);
 printcolor(num); 
}
