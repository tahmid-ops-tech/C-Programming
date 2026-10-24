#include <stdio.h>

 int main()

   {
       float k, c, f;

       printf("Enter Temperature in Kelvin:");
       scanf("%f", &k);

       c = k - 273.15;
       f = (k - 273.15) * 9/5 + 32;

       printf("Kelvin = %.3f\n", k);
       printf("Celsius = %.3f\n", c);
       printf("Fahrenheit = %.3f\n", f);

       return 0;
   }
