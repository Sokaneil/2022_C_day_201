/*
 * E89 Pedagogical & Technical Lab
 * project:     unitaire
 * created on:  2023-01-30 - 09:43 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: puts
 */

#include <unistd.h>
#include "stu.h"

int stu_puts(const char *str)
{
    int i;

    i = stu_strlen(str);
    i = write (1, str, i);
    write(1, '\n', 1);
    if ( i < 0) {
        return(-1);
    } else {
        return (i + 1);
    }
}
