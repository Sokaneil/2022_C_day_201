/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 10:08 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strndup
 */

#include <stdlib.h>
#include "stu.h"

char *stu_strndup(const char *src, unsigned int n)
{
    char *str;
    int i;

    i = 0;
    str = malloc(sizeof(char) * stu_strlen(src) + 1);
    if (!str) {
        return (NULL);
    }
    while (src[i] != '\0') {
        if (i < (int)n) {
            str[i] = src[i];
        } else {
            str[i] = '\0';
            return (str);
        }
        i += 1;
    }
    str[i] = '\0';
    return (str);
}
