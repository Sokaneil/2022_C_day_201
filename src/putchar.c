/*
 * E89 Pedagogical & Technical Lab
 * project:     Tests Unitaires
 * created on:  2023-01-30 - 09:33 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: putchar
 */

#include <unistd.h>

void stu_putchar(char c)
{
    write(1, &c, 1);
}
