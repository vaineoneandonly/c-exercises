#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LEN_WORD 45 /*according to google, longest word in english is 45 letters long lol*/


int main ()
{

    int c, i, j, char_count, word;
    int word_pos_count[MAX_LEN_WORD];

    j = 0;
    char_count = 0;
    word = OUT;

    for (i = 0; i < MAX_LEN_WORD; ++i)
        word_pos_count[i] = 0;


    while ((c = getchar()) != EOF)
    {
        
        if (c != ' ')
            {
                word = IN;
                ++char_count;
            }
        /*new word to be starting (state IN, but blank space identified)*/
        else if (word == IN)
            {
                for (i = 0; i < char_count; ++i)
                    ++word_pos_count[i];

                word = OUT;
                char_count = 0;
            }   
        
    }

    /*exec for ending first/last word*/
    for (i = 0; i < char_count-1; ++i)
        ++word_pos_count[i];

    /* reusing char count to count length of lengthiest word*/
    char_count = 0;

    for (i = 0; i < MAX_LEN_WORD; ++i)
        {
            if (word_pos_count[i] != 0)
                ++char_count;
        }
        /*printf ("%d\n", word_pos_count[i]); - legacy thing that worked*/


    /*creates biggest possible histogram array, considering lengthiest word*/
    while (j != char_count)
    {
        for (i = 0; i < char_count; ++i)
        {
            /* find a way to make the array only print according to the the word pos count. This doesn't work currently*/
            if (word_pos_count[i] < char_count)
            {
                putchar ('c');
                putchar (' ');
            }    
        }

        putchar ('\n');
        ++j;
    }


}


/* next up: finish the vertical line visualization*/

