 #include <stdio.h>

  int main()

   {
       float f, c, k;

       printf("Enter Temperature in Fahrenheit:");
       scanf("%f" , &f);

       c = (f - 32) * 5/9;
       k = (f - 32) * 5/9 + 273.15;


       printf("Celsius = %.3f\n", c);
       printf("Fahrenheit = %.3f\n", f);
       printf("Kelvin = %.3f\n", k);

       return 0;

   }
