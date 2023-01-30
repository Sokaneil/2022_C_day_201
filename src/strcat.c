/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 09:39 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strcat
 */

#include "stu.h"

char *stu_strcat(char *dest, const char *src)
{
    int i;
    int len;

    i = 0;
    len = stu_strlen(dest);
    while (src[i] != '\0') {
        dest[len] = src[i];
        i += 1;
        len += 1;
    }
    dest[len] = '\0';
    return dest;
}
