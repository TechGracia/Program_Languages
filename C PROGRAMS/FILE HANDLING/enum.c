#include <stdio.h>  
 enum months
 {jan=1,
  feb, march, april,
   may, june, july, august, september, october, november, december};  

enum weekdays{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  

int main()  
{  
enum weekdays i; // variable declaration of weekdays type  
enum months k;
  for(i=Sunday;i<=Saturday;i++)  
 printf("%d, ",i);  
 printf("\n");
 i=Friday; // assigning value of Monday to w.  
 printf("The value of w is %d\n\n",i);  
if(i==Friday)
 printf("The value of weekday is Friday\n"); 
// printing the values of months  
 for(k=jan;k<=december;k++)  
 printf("%d, ",k);  
 k=feb;
 switch(k)
 {
    case jan:printf("Jan");
             break;
    case feb:printf("Feb");
             break;
 }
  return 0;
}