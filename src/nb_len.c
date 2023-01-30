/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 09:46 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: nb len
 */

int nb_len(int nb)
{
    int count = 1;

    while (nb >= 10) {
        nb = nb / 10;
        count = count + 1;
    }
    return (count);
}
