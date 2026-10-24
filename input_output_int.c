 #include <stdio.h>

  int main()

   {
       int a = 100;
       int b = 25;

       printf("Enter A Int Number:\n");
       scanf("%d", &a);
       printf("Enter Another Number:\n");
       scanf("%d", &b);

       int sum, diff, mult, div;

       sum = a + b;
       diff = a - b;
       mult = a * b;
       div = a / b;

       printf(" sum = %d\n", sum);
       printf(" diff = %d\n", diff);
       printf(" mult = %d\n", mult);
       printf(" div = %d\n", div);

       return 0;
   }
