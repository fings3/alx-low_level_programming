#ifndef MAIN_H
#define MAIN_H


/**


  * file: main.h
  * Auth: Ani Rahael

  * Desc: Header file containing prtotypes for all functions


  *       used in the 0x06. C - more pointers, arrays and strings directory.
  */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strncmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);


#endif
