#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LEN_WORD 45


/* this program only takes notes of the positions themselves so far. Find a way to make it so that the counting restarts I think*/

int main ()
{

    int c, i, char_count, word;
    int word_pos_count[MAX_LEN_WORD];

    char_count = 0;
    word = OUT;

    /* assigns a value for every place in the array*/
    for (i = 0; i < MAX_LEN_WORD; ++i)
        word_pos_count[i] = 0;


    while ((c = getchar()) != EOF)
    {
        
        if (c != ' ')
            {
                word = IN;
                ++char_count;
            }
        else if (word == IN)
            {
                for (i = 0; i < char_count; ++i)
                    ++word_pos_count[i];

                word = OUT;
                char_count = 0;
            }
        
    }


    /* -1 because it's counting one more caracther for some god forsaken reason
    for (i = 0; i < char_count-1; ++i)
            ++word_pos_count[i]; */


    /* */
    for (i = 0; i < MAX_LEN_WORD; ++i)
        printf ("%d\n", word_pos_count[i]);

}




