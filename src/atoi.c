/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 11:52 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: atoi
 */

int stu_atoi(const char *str)
{
    int result;
    int i;

    result = 0;
    i = 0;
    while (str[i] != '\0') {
        result = result * 10 + str[i] - '0';
        i += 1;
    }
    return result;
}
