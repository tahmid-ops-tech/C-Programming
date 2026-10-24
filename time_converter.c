 #include <stdio.h>

  int main()

   {
       int total, h, m, s;

       printf("Enter Total Seconds:");
       scanf("%d", & total);

       h = total/3600;
       m = (total % 3600) / 60;
       s = total % 60;

       printf("Hours = %d\n", h);
       printf("Minutes = %d\n", m);
       printf("Seconds = %d\n", s);

       return 0;

   }
