/*
 * E89 Pedagogical & Technical Lab
 * project:     Unitaire
 * created on:  2023-01-30 - 10:03 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strcmp
 */

int stu_strcmp(const char *s1, const char *s2)
{
    while((*s1 != '\0' && *s2 != '\0') && *s1 == *s2) {
            s1 = s1 + 1;
            s2 = s2 + 1;
        }
        if (*s1 == *s2) {
            return 0;
        } else {
            return *s1 - *s2;
        }
}
