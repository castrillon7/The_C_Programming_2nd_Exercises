//
// Created by Gabriel Castrillon on 12/06/2018.
//

#include <stdio.h>
#include <stdlib.h>


// Constants
#define LOWER (-120)
#define UPPER  240
#define STEP   15


// Get that cool delta banner
void print_banner()
{
    printf("\n"
           "         x          Productions\n"
           "        xxx         =============================================================\n"
           "       xx xx        000 0    0   0  0     0  000  0    0     0     0 0 0 0  000  \n"
           "      xx   xx        0  0    0   0  0 0 0 0   0   00   0    0 0       0      0   \n"
           "     xx     xx       0  0    0   0  0  0  0   0   0 0  0   0   0      0      0   \n"
           "    xx   O   xx      0  0    0   0  0     0   0   0  0 0  0 0 0 0     0      0   \n"
           "   xx         xx    000 0000 00000  0     0  000  0    0 0       0    0     000  \n"
           "  xxxxxxxxxxxxxxx   =============================================================\n\n");
}

// Hello World!
void exercise_1()
{
    printf("Hello World!\n");
}

// What's different with this "Hello World!"
void exercise_2()
{
    printf("Hello World\n \w");
}

// Converts temperature in Fahrenheit to celsius + Header.
void exercise_3()
{
    int fahr;
    printf("Converted Fahrenheit to Celsius:");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("F %d -> %.1f C \n", fahr, 5.0 * (fahr - 32.0) / 9.0 );
    }
}

// The very opposite of #3.
void exercise_4()
{
    int celso; // Grande Celsão!!
    printf("Converted Celsius to Fahrenheit:");

    for (celso = LOWER; celso <= UPPER; celso = celso + STEP)
    {
        printf("C %d -> %.1f F \n", celso, celso * 1.8 + 32 );
    }
}

// Like #3 and #4, but from UPPER to LOWER.
void exercise_5()
{
    int celso; // Grande Celsão!!
    printf("Converted Celsius to Fahrenheit:");

    for (celso = UPPER; celso <= LOWER; celso = celso - STEP)
    {
        printf("C %d -> %.1f F \n", celso, celso * 1.8 + 32 );
    }
}

// Check result of getchar() != EOF
void exercise_6()
{
    printf("Result is: %d", getchar() != EOF); // Can throw an EOF with Ctrl + D on Windows.
}

// Print EOF's value. (Can also be found in <stdlib.h>)
void exercise_7()
{
    printf("Result is: %d", getchar() != EOF); // Can throw an EOF with Ctrl + D on Windows.
}

// Count blanks, tabs and new lines.
void exercise_8()
{
    int count = 0, c;

    printf("Gimme some characters and then press Ctrl+D.\n");
    while( (c = getchar()) != EOF ) // Condition will never be met unless ye uses Ctrl + D.
        if (c == '\n')
            count++;

    printf("%d\n", count);
}


void exercise_9()
{
    // ZZZzzzZzzZzzzzZZZ
}

// Forces \t, \b and \\ to show up.
void exercise_10()
{
    int c;

    printf("Gimme some characters and then press Ctrl+D.\n");
    while ( (c = getchar()) != EOF )
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            printf("%c", c);
}

// Prints the answer. lol
void exercise_11()
{
    printf("Writing a bunch of things.\nOther types o slashes.");
}

// Prints one work per line, reading it all from getchar.
void exercise_12()
{
    int c;

    printf("Gimme some characters and then press Ctrl+D.\n");
    while( (c = getchar()) != EOF )
    {
        if(c != '\n' && c != ' ')
        {
            putchar(c);
        }
        else
        {
            printf("\n");
        }
    }
}

// Trynna understand better how to work with char.
void char_play(int type)
{
    int count = 0, c;

    if (type == 1)
    {
        while( (getchar()) != EOF ) // Condition will never be met
        {
            count++;
            printf("%d\n", count);
        }
    }
    else if (type == 2) // Count chars != \n
    {
        while( (c = getchar()) != EOF ) // Condition will never be met
        {
            if(c != '\n')
            {
                printf("!\\n #%d\n", count++);
            }
        }
    }
    else if (type == 3) // asd
    {
        while (1) {
            c = getchar();            // Get one character from the input
            if (c == EOF) { break; }  // Exit the loop if we receive EOF ("end of file")
            putchar(c);               // Put the character to the output
        }
    }
}

int main()
{
    // Uncomment one of the lines to see the given exercise result.
//    exercise_1();
//    exercise_2();
//    exercise_3();
//    exercise_4();
//    exercise_5();
//    exercise_6();
//    exercise_7();
//    exercise_8();
//    exercise_9();
//    exercise_10();
//    exercise_11();
    exercise_12();
//    exercise_13();
//    exercise_14();

    return 0;
}
