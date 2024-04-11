#include <stdio.h>

#define IN 1
#define OUT 0

int main ()
{

    int c, word;
    
    word = OUT;

    while ((c = getchar ()) != EOF)
    {

        if (c != ' ' && c != '\n' && c != '\t')
        {
            word = IN;
            putchar ('-');
        }
        else if (word == IN)
        {   
            word = OUT;
            putchar ('\n');
        }  

    }

}




