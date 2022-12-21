#ifndef MAIN_H
#defin  MAIN_H
#include <stdio.h>
/**
 * void prototype()
 * int prototype()
 * char prototype()
 */
void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);
int _stremp(char *s1, char *s2);
char *strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int size_r);

#endif /*MAIN_H/
