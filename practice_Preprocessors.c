#include <stdio.h>

/*
Header File         Description

<assert.h>	It contains information for adding diagnostics that aid program debugging.

<errorno.h>	It is used to perform error handling operations like errno(), strerror(), perror(), etc.

<float.h>	It contains a set of various platform-dependent constants related to floating point values. These constants are proposed by ANSI C.
            They make programs more portable. Some examples of constants included in this header file are- e(exponent), b(base/radix), etc.

<math.h>	It is used to perform mathematical operations like sqrt(), log2(), pow(), etc.

<signal.h>	It is used to perform signal handling functions like signal() and raise().

<stdarg.h>	It is used to perform standard argument functions like va_start() and va_arg(). It is also used to indicate start of the
            variable-length argument list and to fetch the arguments from the variable-length argument list in the program respectively.

<ctype.h>	It contains function prototypes for functions that test characters for certain properties, and also function prototypes for
            functions that can be used to convert uppercase letters to lowercase letters and vice versa.

<stdio.h>	It is used to perform input and output operations using functions like scanf(), printf(), etc.

<setjump.h>	It contains standard utility functions like malloc(), realloc(), etc. It contains function prototypes for functions that allow bypassing
            of the usual function call and return sequence.

<string.h>	It is used to perform various functionalities related to string manipulation like strlen(), strcmp(), strcpy(), size(), etc.

<limits.h>	It determines the various properties of the various variable types. The macros defined in this header limits the values of
            various variable types like char, int, and long. These limits specify that a variable cannot store any value
            beyond these limits, for example, an unsigned character can store up to a maximum value of 255.

<time.h>	It is used to perform functions related to date() and time() like setdate() and getdate(). It is also used to modify the system date
            and get the CPU time respectively.

<stddef.h>	It contains common type definitions used by C for performing calculations.

<locale.h>	It contains function prototypes and other information that enables a program to be modified for the current locale on which it’s running.
            It enables the computer system to handle different conventions for expressing data such as times, dates, or large numbers throughout the world.
*/

// User libraries
// #include "user_lib.h"

// define macro
#define PI 3.1415
#define min(a, b) ((a < b) ? a : b)
// Multi-line Macro definition
#define ELE 1, \
            2, \
            3

#define print_number(i, limit) \
    while (i < limit)          \
    {                          \
        printf("hello ");      \
        i++;                   \
    }                          \
    printf("\n");

// Conditional Compilation
#define macro_name
#define constant_expr 1

#ifdef macro_name
// Code to be executed if macro_name is defined
#endif
#ifndef macro_name
// Code to be executed if macro_name is not defined
#endif

#if constant_expr == 1
// Code to be executed if constant_expression is true

#elif another_constant_expr == 1
// Code to be excuted if another_constant_expression is true
#else
// Code to be excuted if none of the above conditions are true
#endif

// Other Directives

#undef constant_expr

void func1();
void func2();

void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();

void func1() { printf("Inside func1()\n\n"); }

void func2() { printf("\nInside func2()\n"); }

// Macro to print the current line number
#define PrintLineNum                               \
    printf("Line number is %d in file named %s\n", \
           __LINE__, __FILE__)

// #error – Error Directive

// #ifndef max
// #error max(A,B) not found!
// #endif

// Token-Pasting operator ##
#define merge(a, b) (a##b)

// converte to a string literal by using #
#define get(x) #x
// Function prototype declaration

// Global variable declaration

int main()
{
    // Your code here
    // Variable declaration

    // Array arr[] with elements
    // defined in macros
    int arr[] = {ELE};
    int i = 0;
    printf("PI = %.2f\n", PI);
    printf("min(9,5) = %d\n", min(9, 5));

    printf("Inside main function\n");
    // Print the original line number
    PrintLineNum;

// Using #line to change line number and file name
// temporarily
#line 20 "main.c"
    PrintLineNum;

// revert to the original line number and file name
#line 30 "index.c"
    PrintLineNum;

    printf("merge(12,34) = %d\n", merge(12, 34));
    printf("get(Hoang Giang) = %s\n", get(Hoang Giang));

    print_number(i, 3);

    PrintLineNum;

    printf("\nCurrent File :%s\n", __FILE__);
    printf("Current Date :%s\n", __DATE__);
    printf("Current Time :%s\n", __TIME__);
    printf("Line Number :%d\n", __LINE__);
    return 0;
}
// Sub function
