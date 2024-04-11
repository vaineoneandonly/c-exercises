#include <stdio.h>

int main ()
{

    int c;

    while ((c = getchar ()) != EOF)
    {

        if (c != ' ')
            putchar (c);
        else
        {
            putchar ('\\');
            putchar ('b');
        }

        if (c == '\t')
        {
            putchar ('\\');
            putchar ('t');
        }           

        if (c == '\\')
        {
            putchar ('\\');
        }

    }

}