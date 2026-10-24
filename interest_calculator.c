 #include <stdio.h>

   int main()

   {
       float p, r , t, total, si;

       printf("Enter Principal Amount:");
       scanf("%f", &p);

       printf("Enter Rate of Interest:");
       scanf("%f", &r);

       printf("Enter Time in Years:");
       scanf("%f", &t);

       si = ( p * r * t) / 100;
       total = p + si;

       printf("Principal = %.3f\n", p);
       printf("Simple Interest = %.3f\n", si);
       printf("Total Amount = %.3f\n", total);

       return 0;
   }
