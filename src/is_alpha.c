/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 10:43 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: is alpha
 */

int is_alpha(char c)
{
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}
