/*
 * E89 Pedagogical & Technical Lab
 * project:     Tests Unitaires
 * created on:  2023-01-30 - 09:31 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: print base 10
 */

#include "stu.h"

int print_base10(int nb)
{
    int i;
    int count;
    int index;

    i = 0;
    if (nb < 0) {
        nb *= - 1;
        stu_putchar('-');
        i += 1;
    }
    index = nb_len(nb);
    index = index - 1;
    while (index >= 0) {
        count = get_digit(nb, index) + '0';
        index = index - 1;
        stu_putchar(count);
        i += 1;
    }
    return(i);
}
