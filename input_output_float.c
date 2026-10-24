 #include <stdio.h>

  int main()

   {
       float a = 100;
       float b = 25;

       printf("Enter A Int Number:\n");
       scanf("%f", &a);
       printf("Enter Another Number:\n");
       scanf("%f", &b);

       float sum, diff, mult, div;

       sum = a + b;
       diff = a - b;
       mult = a * b;
       div = a / b;

       printf(" sum = %.5f\n", sum);
       printf(" diff = %.5f\n", diff);
       printf(" mult = %.5f\n", mult);
       printf(" div = %.5f\n", div);

       return 0;

   }

