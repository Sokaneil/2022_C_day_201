/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaires
 * created on:  2023-01-30 - 09:51 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: swap_int
 */

void swap_int(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
