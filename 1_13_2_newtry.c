#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LEN_WORD 45


/* this program only takes notes of the positions themselves so far. Find a way to make it so that the counting restarts I think*/

int main ()
{

    int c, i, word, char_count;
    int word_pos_count[MAX_LEN_WORD];

    char_count = 0;
    word = OUT;


    for (i = 0; i < MAX_LEN_WORD; ++i)
        word_pos_count[i] = 0;




    while ((c = getchar ()) != EOF)
    {

        if  (c != ' ')
        {
            ++char_count;
            word = IN;
        }
        else if (word == IN)
        {
            for (i = 0; i < char_count; ++i)
                ++word_pos_count[i];

            char_count = 0;
            word = OUT;
        }

    }


    word_pos_count[char_count-1] = 0;


    for (i = 0; i < MAX_LEN_WORD; ++i)
        printf ("%d\n", word_pos_count[i]);

}




