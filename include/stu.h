/*
 * E89 Pedagogical & Technical Lab
 * project:     Tests Unitaires
 * created on:  2023-01-30 - 09:27 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: My Library
 */

#ifndef _STU_H_
#define _STU_H_

void stu_putchar(char c);
int get_digit(int nb, int index);
int nb_len(int nb);
int stu_puts(const char *str);
int print_base10(int nb);
int stu_atoi(const char *str);
int stu_strlen(const char *str);
int stu_strcmp(const char *s1, const char *s2);
char *stu_strcpy(char *dest, const char *src);
char *stu_strncpy(char *, const char *, unsigned int);
char *stu_strdup(const char *src);
char *stu_strndup(const char *src, unsigned int n);
char *stu_strcat(char *dest, const char *src);
char *stu_strchr(const char *str, char c);
int is_alpha(char c);
int is_num(char c);
void swap_int(int *a, int *b);

#endif /*Neil*/
