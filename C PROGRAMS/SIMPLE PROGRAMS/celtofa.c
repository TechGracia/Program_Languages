#include<stdio.h>
main()
{
float celsius,fahrenheit;
printf("Enter the Temperature in Celsius :");
scanf("%f",&celsius );
fahrenheit=1.8*(celsius+32);
printf("Temperature in fahrenheit: %f", fahrenheit);
return 0;
}