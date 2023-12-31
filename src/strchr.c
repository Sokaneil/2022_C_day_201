/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-24 - 17:51 +0200
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strchr
 */

char *stu_strchr(const char *str, char search)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        if (str[i] == search) {
            return (char *)str;
        }
        str += 1;
    }
    return 0;
}
