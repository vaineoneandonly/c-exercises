#include <stdio.h>

int main ()
{

    int character;
    int newlines, blanks, tabs;

    newlines = 0;
    blanks = 0;
    tabs = 0;


    while ((character = getchar()) != EOF)
    {

        if (character == '\n')
            ++newlines;

        if (character == ' ')
            ++blanks;
        
        if (character = '\t')
            ++tabs;

    }

    tabs = tabs / 2;

    printf ("New lines: %d\n", newlines);
    printf ("Blanks: %d\n", blanks);
    printf ("Tabs: %d\n", tabs);

}