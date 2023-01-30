/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 11:11 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: is num
 */

int is_num(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}
