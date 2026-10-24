 #include <stdio.h>

  int main()

   {
       float c, f, k;

       printf("Enter Temperature in Celsius:");

       scanf("%f", &c);

       f = (c * 9/5) + 32;
       k = c + 273.15;

       printf("Celsius = %.3f\n", c);
       printf("Fahrenheit = %.3f\n", f);
       printf("Kelvin = %.3f\n", k);

       return 0;
   }
