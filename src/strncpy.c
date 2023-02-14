/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 10:07 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strncpy
 */

#include <stddef.h>
#include "stu.h"

char *stu_strncpy(char *dest, const char *src, unsigned int n)
{
    int m;

    m = 0;
    while ((dest == NULL) && (src == NULL)) {
        return NULL;
    }
    while (src[m] != '\0') {
        if (m < (int)n) {
        dest[m] = src[m];
        } else {
            dest[m] = '\0';
            return dest;
        }
        m = m + 1;
    }
    dest[m] = '\0';
    return dest;
}
