/*
// Author:     Nguyen Xuan Hoang Giang}
// Email:      giang.nguyen-hoang@banvien.com.vn
// Company:    Ban Vien
// Job Title:  Embedded software engineer
// Location:   Ho Chi Minh city - Vietnam
// Project:    Project Name
// Date:       20/04/2024
// Time:       02:47:31
*/

// C program to show input and output

// #define basic_io
// #define fomatted_io
#define unfomatted_io

#ifdef basic_io
#include <stdio.h>

int main()
{

  // Declare the variables
  int num;
  char ch, str[10];
  float f;

  // --- Integer ---

  // Input the integer
  printf("Enter the integer: ");
  scanf("%d", &num);

  // Output the integer
  printf("\nEntered integer is: %d", num);

  // --- Float ---

  // For input Clearing buffer
  while ((getchar()) != '\n')
    ;

  // Input the float
  printf("\n\nEnter the float: ");
  scanf("%f", &f);

  // Output the float
  printf("\nEntered float is: %.3f\n", f);

  // --- Character ---

  // Input the Character
  printf("\nEnter the Character: ");
  scanf("\n%c", &ch);

  // Output the Character
  printf("\nEntered character is: %c\n", ch);

  // --- String ---
  // To read a Sentence

  // Input the Sentence
  printf("\nEnter the Sentence: ");
  scanf(" %[^\n]s", str); // read characters untill reach "\n"
                          // can change "\n" by other character

  // Output the String
  printf("\nEntered Sentence is: %s", str);
  return 0;
}

#endif

#ifdef fomatted_io
/*
    printf()
    scanf()
    sprintf()
    sscanf()
*/

#include <stdio.h>

int main()
{
  int a = 33, b = 20, c = 0, d = 0;
  char ch = 'z';
  char str[] = "Giang", str1[20];
  float f = 10.01;

  printf("interger value of a = %d\n", a);
  printf("hex value of a = %x\n", a);
  printf("octal value of a = %o\n", a);
  printf("char value of a = %c\n", a);

  sprintf(str1, "a = %d and b = %d", b, a);
  printf("a = %d and b = %d\n", a, b);
  printf("string 1: \"%s\"\n", str1);

  sscanf(str1, "a = %d and b = %d", &c, &d);
  printf("c = %d and d = %d\n", c, d);

  return 0;
}
#endif

#ifdef unfomatted_io

/*
getch()
getche()
getchar()
putchar()
gets()
puts()
putch()


*/

// #include <stdio.h>

// getch() function
// getche() function
// the getchar() function
// the putchar() function
#include <conio.h>

// the gets() function
// the puts() function

#include <stdio.h>

int main()
{
  char ch;
  char str[50];

  printf("Enter a charactere: ");
  // getch();
  // getche();

  ch = getchar();

  // printf("\ncharacter ch = %c\n", ch);
  // putchar(ch);// the gets() function

  // scanf("\n%[^\n]s", &str);
  // printf("string is %s", str);
  // puts(str);
  putch(ch);
  
  return 0;
}

#endif


/**
 * @brief   description of the function.
 * @param   param1 Description of param1
 * @param   param2 Description of param2
 * @param   param3 Description of param3
 * @returns Description of param3 Description of return value
 */
void functionName(void) {
    // Function body

}
