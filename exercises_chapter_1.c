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
void exercise_1_1()
{
    printf("Hello World!\n");
}

// What's different with this "Hello World!"
void exercise_1_2()
{
    // Nonsense comment
    printf("Hello World\n");
}

// Converts temperature in Fahrenheit to celsius + Header.
void exercise_1_3()
{
    int fahr;
    printf("Converted Fahrenheit to Celsius:");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("F %d -> %.1f C \n", fahr, 5.0 * (fahr - 32.0) / 9.0 );
    }
}

// The very opposite of #3.
void exercise_1_4()
{
    int celso; // Grande Celsão!!
    printf("Converted Celsius to Fahrenheit:");

    for (celso = LOWER; celso <= UPPER; celso = celso + STEP)
    {
        printf("C %d -> %.1f F \n", celso, celso * 1.8 + 32 );
    }
}

// Like #3 and #4, but from UPPER to LOWER.
void exercise_1_5()
{
    int celso; // Grande Celsão!!
    printf("Converted Celsius to Fahrenheit:");

    for (celso = UPPER; celso <= LOWER; celso = celso - STEP)
    {
        printf("C %d -> %.1f F \n", celso, celso * 1.8 + 32 );
    }
}

// Check result of getchar() != EOF
void exercise_1_6()
{
    printf("Result is: %d", getchar() != EOF); // Can throw an EOF with Ctrl + D on Windows.
}

// Print EOF's value. (Can also be found in <stdlib.h>)
void exercise_1_7()
{
    printf("Result is: %d", getchar() != EOF); // Can throw an EOF with Ctrl + D on Windows.
}

// Count blanks, tabs and new lines.
void exercise_1_8()
{
    int count = 0, c;

    printf("Gimme some characters and then press Ctrl+D.\n");
    while( (c = getchar()) != EOF ) // Condition will never be met unless ye uses Ctrl + D.
        if (c == '\n')
            count++;

    printf("%d\n", count);
}


void exercise_1_9()
{
    // ZZZzzzZzzZzzzzZZZ
}

// Forces \t, \b and \\ to show up.
void exercise_1_10()
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
void exercise_1_11()
{
    printf("Writing a bunch of things.\nOther types o slashes.");
}

// Prints one work per line, reading it all from getchar.
void exercise_1_12()
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

// Word Length
void exercise_1_13()
{
    int c, size = 0;

    while ((c = getchar()) != '&')
        if (c >= 33 && c <= 165)
        {
            printf("%c", c);
            ++size;
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            printf(" ---> %d\n", size);
            size = 0;
        }
}

// Char occurrence
void exercise_1_14()
{
    int c, char_count[26];

    for (int i = 0; i < 26; ++i)
        char_count[i] = 0;

    while ((c = getchar()) != '&')
        if (c >= 97 && c <= 122) // a thru z
            ++char_count[c - 97];

    for (int j = 0; j < 26; ++j)
        printf("%c: %d\n", j + 97, char_count[j]);
}

// Temperature with functions
double exercise_1_15(int temp, char convert_from, char convert_to)
{
    if (convert_from == 'f' && convert_to == 'c')
        return 5.0 * (temp - 32.0) / 9.0;
    else if (convert_from == 'c' && convert_to == 'f')
        return temp * 1.8 + 32.0;
    else
        return 0;
}

int getlinha(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
        s[i] = (char) c;
    if (c == '\n') {
        s[i] = (char) c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void copy(char to[], const char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void exercise_1_16()
{
    int len;
    int max;
    char line[1000];
    char longest[1000];

    max = 0;
    while ((len = getlinha(line, 1000)) > 0)
    {
        if (len == 1)
            break;
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("DA LONGEST: %d chars >> %s", max, longest);
}

void exercise_1_17()
{
    /* ToDo: Imma do this later */
}

void exercise_1_18()
{
    /* ToDo: Imma do this later */
}

// Reverse string
void exercise_1_19()
{
    int i, c;
    char line[250];
    char rev_line[250];
    for (i = 0; i < 250 && (c=getchar()) !=EOF && c!='\n'; ++i)
        line[i] = (char) c;

    int k = 0;
    for (int j = i - 1; j >= 0 ; j--)
    {
        rev_line[k] = line[j];
        k++;
    }
    rev_line[k] = '\0'; // set end of string, as there might be garbage

    printf("N: %s\nS: %s\n", line, rev_line);
}

void exercise_1_20()
{
    /* ToDo: Imma do this later */
}

void exercise_1_21()
{
    /* ToDo: Imma do this later */
}

void exercise_1_22()
{
    /* Imma do this later */
}

void exercise_1_23()
{
    /* ToDo: Imma do this later */
}

void exercise_1_24()
{
    int size = 5;
    char line[250];
    /* Char -> Dec
      a1- " -> 34
      a2- ' -> 39
      a3- ( -> 40
      a4- ) -> 41
      a5- [ -> 91
      a6- ] -> 93
      a7- { -> 123
      a8- } -> 125
    */
    int unbalanced[size];
    int c, i;
    for (int a = 0; a < size; ++a)
        unbalanced[a] = 0;

    for (i = 0; i < 250 && (c = getchar()) != EOF && c!='\n'; ++i)
    {
        switch (c)
        {
            case 34 : unbalanced[0]++; continue;
            case 39 : unbalanced[1]++; continue;
            case 40 : unbalanced[2]++; continue;
            case 41 : unbalanced[2]--; continue;
            case 91 : unbalanced[3]++; continue;
            case 93 : unbalanced[3]--; continue;
            case 123: unbalanced[4]++; continue;
            case 125: unbalanced[4]--; continue;
            default : continue;
        }
    }

    if (unbalanced[0] % 2 == 1) printf("Unbalanced double quotes!\n");
    if (unbalanced[1] % 2 == 1) printf("Unbalanced single quotes!\n");
    if (unbalanced[2] == 1) printf("Unbalanced parenthesis!\n");
    if (unbalanced[3] == 1) printf("Unbalanced brackets!\n");
    if (unbalanced[4] == 1) printf("Unbalanced braces!\n");

}

// Trynna understand better how to work with char.
void char_play(int type)
{
    int count = 0, c;

    if (type == 1)
    {
        while( (getchar()) != '$' )
        {
            count++;
            printf("%d\n", count);
        }
    }
    else if (type == 2) // Count chars != \n
    {
        while( (c = getchar()) != '$' )
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

/**
 * Charpter 1 exercises
 * Uncomment one of the lines to see the given exercise exec/result.
 * - Some might not be done.
 * */
void exercises_chapter_1()
{
//    exercise_1_1();
//    exercise_1_2();
//    exercise_1_3();
//    exercise_1_4();
//    exercise_1_5();
//    exercise_1_6();
//    exercise_1_7();
//    exercise_1_8();
//    exercise_1_9();
//    exercise_1_10();
//    exercise_1_11();
//    exercise_1_12();
//    exercise_1_13();
//    exercise_1_14();
    // exercise_1_15
//    int temp = 0; printf("C %d -> %.1f F \n", temp, exercise_1_15(temp, 'c', 'f'));
//    exercise_1_16();
//    exercise_1_17();
//    exercise_1_18();
//    exercise_1_19();
//    exercise_1_20();
//    exercise_1_21();
//    exercise_1_22();
//    exercise_1_23();
//    exercise_1_24();
}
