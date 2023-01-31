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
    int j;

    result = 0;
    i = 0;
    j = 1;
    if (str[i] == '-') {
            j = -1;
            i += 1;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0') {
        result = result * 10 + (int)str[i] - '0';
        i += 1;
    }
    return (result * j);
}
