#include<stdio.h>
main()
{
float celsius,fahrenheit;
printf("Enter the Temperature in Fahrenheit :");
scanf("%f",&fahrenheit);
celsius=5.0/9*(fahrenheit-32);
printf("Temperature in Celsius : %f", celsius);
return 0;
}