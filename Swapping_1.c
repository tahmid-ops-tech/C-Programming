 #include <stdio.h>

   int main()
    {
        int a = 550;
        int b = 50;


        int c;

        c = a;
        a = b;
        b = c;

        printf("a = %d b = %d", a, b, c);

        return 0;

    }
