/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 09:41 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strdup
 */

#include <stdlib.h>
#include "stu.h"

char *stu_strdup(const char *src)
{
    char *str;

    str = malloc(sizeof(char) * stu_strlen(src) + 1);
    if (!str) {
        return (NULL);
    }
    stu_strcpy(str, src);
    return (str);
}

