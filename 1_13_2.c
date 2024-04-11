#include <stdio.h>

#define IN 1
#define OUT 0

int main ()
{

    int c, i, word, char_count;
    int word_pos_count[10];

    char_count = 0;
    word = OUT;

    for (i = 0; i < 10; ++i)
        word_pos_count[i] = 0;


    while ((c = getchar ()) != EOF)
    {

        if (c != ' ')
        {
            word = IN;
            ++char_count;

            for (i = 0; i <= char_count; ++i)
                {

                    

                }



        }
        else if (word == IN)
        {
            printf ("%d\n", char_count);
            word = OUT;
            char_count = 0;
        }

    } 

    printf ("%d\n", char_count-1);

}




