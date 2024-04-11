#include <stdio.h>

int main ()
{

    int c, last_c;

    while ((c = getchar()) != EOF)
    {

        if (c != ' ')
        {
         
            putchar (c);

        }   
        else
        {

            if (last_c != c)
            {
                putchar (c);
            }

        }

        last_c = c;

    } 

}