 #include <stdio.h>

   int main()

    {
      float r , b, h, l, w;
      float c, t, rr;

      printf("Inter a Radius Value:");
      scanf("%f", &r);
      c = 3.1416 * r * r;

      printf("Inter a Triangle Base:");
      scanf("%f", &b);
      printf("Inter a Triangle Height:");
      scanf("%f", &h);
      t = 0.5 * b * h;

      printf("Inter a Rectangle Length:");
      scanf("%f", &l);
      printf("Inter a Rectangle Width:");
      scanf("%f", &w);
      rr = l * w;

      printf("Circle Area = %.3f\n", c);
      printf("Triangle Area = %.3f\n", t);
      printf("Rectangle Area = %.3f\n", rr);

      return 0;
    }
