 #include <stdio.h>

  int main()

   {
       int a = 125;
       int b = 50;
       int c = 25;

       int d;

       d = a;
       a = b;
       b = c;
       c = d;

       printf("a = %d b = %d C = %d", a, b, c);

       return 0;
   }
