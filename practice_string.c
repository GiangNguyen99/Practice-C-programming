/*
// Author:     Nguyen Xuan Hoang Giang
// Email:      giang.nguyen-hoang@banvien.com.vn
// Company:    Ban Vien
// Job Title:  Embedded software engineer
// Location:   Ho Chi Minh city - Vietnam
// Project:    Project Name
// Date:       20/04/2024
// Time:       13:12:14
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
strlen()    Returns the length of the string.
strcpy()    Copy one string to another. Delete all characters in dest and copy all characters in source.
strncpy()   Copy first n characters of one string to another. Copy n characters in source and remain other character in dest if len(dest) > n.
strcat()    Concatenates two strings.
strncat()   Concatenates first n characters of one string to another.
strcmp()    Compares two strings.
strncmp()   Compares first n characters of two strings.
strchr()    Find the first occurrence of the given character in the string.
strrchr()   Finds the last occurrence of the given characters in the string.
strstr()    Find the given substring in the string.
strcspn()   Returns the span of the source string not containing any character of the given string.     //skip
strspn()    Returns the span of the source string containing only the characters of the given string.
strpbrk()   Finds the first occurrence of any of the characters of the given string in the source string.
strtok()    Split the given string into tokens based on some character as a delimiter.
strcoll()   Compares two strings that are passed.
memset()    Initialize a block of memory with the given character.
memcmp()    Compares two blocks of memory.
memcpy()    Copy two blocks of memory.
memmove()   Moves two blocks of memory.
memchr()    Finds the given character in the block of memory.
*/

// User libraries

// Function prototype declaration

// Global variable declaration

int main()
{
    // Your code here
    // Variable declaration
    int length = 0;
    char str1[] = "Nguyen Xuan Hoang Giang";
    char *str2[] = {"Nguyen", "Xuan", "Hoang", "Giang"};
    char str3[100] = {"I'm worked as an embedded software engineer. "};
    char str4[20] = "Now I'm 25. ";
    /*--------------------------------------------------------------------------------*/

    printf("\nAll string init: \n");
    printf("str1 = %s, length = %d\n\r", str1, strlen(str1));

    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("str2[%d] = %s, length = %d\n\r", i, str2[i], strlen(str2[i]));
    }
    printf("str3 = %s, length = %d\n\r", str3, strlen(str3));
    printf("str4 = %s, length = %d\n\r", str4, strlen(str4));

    /*--------------------------------------------------------------------------------*/
    printf("\nAll string after str3 copy to str1: \n");
    strcpy(str1, str3);
    printf("str1 = %s, length = %d\n\r", str1, strlen(str1));

    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("str2[%d] = %s, length = %d\n\r", i, str2[i], strlen(str2[i]));
    }
    printf("str3 = %s, length = %d\n\r", str3, strlen(str3));
    printf("str4 = %s, length = %d\n\r", str4, strlen(str4));
    /*--------------------------------------------------------------------------------*/

    printf("\nAll string after str4 copy 7 characters to str1: \n");
    strncpy(str1, str4, 7);
    printf("str1 = %s, length = %d\n\r", str1, strlen(str1));

    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("str2[%d] = %s, length = %d\n\r", i, str2[i], strlen(str2[i]));
    }
    printf("str3 = %s, length = %d\n\r", str3, strlen(str3));
    printf("str4 = %s, length = %d\n\r", str4, strlen(str4));
    /*--------------------------------------------------------------------------------*/
    strcat(str3, str4);
    printf("\nAll string after str4 concat to str3: \n");

    printf("str1 = %s, length = %d\n\r", str1, strlen(str1));

    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("str2[%d] = %s, length = %d\n\r", i, str2[i], strlen(str2[i]));
    }
    printf("str3 = %s, length = %d\n\r", str3, strlen(str3));
    printf("str4 = %s, length = %d\n\r", str4, strlen(str4));
    /*--------------------------------------------------------------------------------*/
    int compare = 0;

    compare = strcmp(str3, str4);
    printf("\nAll string after str4 concat to str3: \n");

    printf("str1 = %s, length = %d\n\r", str1, strlen(str1));

    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("str2[%d] = %s, length = %d\n\r", i, str2[i], strlen(str2[i]));
    }
    printf("str3 = %s, length = %d\n\r", str3, strlen(str3));
    printf("str4 = %s, length = %d\n\r", str4, strlen(str4));

    printf("Compare str3 vs str4 is %d\n\r", compare);
    /*--------------------------------------------------------------------------------*/

    char str5[] = "this is an example.";
    char str6[] = "an example";
    char str7[] = "an another string.";
    char *p = NULL;
    printf("\nApplication: Replace a String with Another using strstr(str5, str6): \n");

    p = strstr(str5, str6);

    if (p)
    {
        /* code */
        strcpy(p, str7);
        printf("str5 is \"%s\"\n\r", str5);
    }
    else
    {
        /* code */
        printf("str6 not found in str5\n\r");
    }
    /*--------------------------------------------------------------------------------*/
    printf("\nPractice memset() \n");

    char str8[] = "this is a string";
    printf("str8 before memset(): %s, length = %d\n", str8, strlen(str8));

    memset(str8, 126, strlen(str8));
    printf("str8 after memset(): %s, length = %d\n", str8, strlen(str8));

    /*--------------------------------------------------------------------------------*/

    // getch();

    return 0;
}
// Sub function
