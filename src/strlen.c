/*
 * E89 Pedagogical & Technical Lab
 * project:     Tests Unitaires
 * created on:  2023-01-30 - 09:35 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strlen
 */

unsigned int stu_strlen(const char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}
