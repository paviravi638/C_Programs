 /*The function/method difference_in_ datesaccepts two argument date1 and date2, representing given two DatesDevelopers at ABC Technologies already 
 use a predefined structure Date containing day, month, and year as members. A collection of functions/methods for performing some common 
 operations on dates is also available. You are supposed to make use of these functions/methods to calculate and return the difference.*/



int differefence_in_dates(Date *date1,Date *date2)  
{  
 long int n1,n2; 
 int i,y;  
 int monthDays[12] = {31, 28, 31,30, 31, 30,31, 31, 30, 31, 30, 31};  
 
 n1 = date1->year*365 + date1->day;    
        for (i=0; i<date1->month - 1; i++)  
        n1 += monthDays[i]; 
 y = date1->year;  
 if (date1->month <= 2)  
         y--;   
 n1 += y/4 - y/100 + y/400;  
   
        n2 = date2->year*365 + date2->day; 
 for (i=0; i<date2->month - 1; i++)  
         n2 += monthDays[i];  
 y = date2->year;  
 if (date2->month <= 2)  
         y--;   
 n2 += y/4 - y/100 + y/400; 
 
 return (n2 - n1);  
} 
