/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 09:47 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: get digit
 */

int get_digit(int nb, int index)
{
    while (index > 0) {
        nb = nb / 10;
        index = index - 1;
    }
    nb = nb % 10;
    return (nb);
}
