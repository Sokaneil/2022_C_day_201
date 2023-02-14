#include <criterion/criterion.h>
#include "stu.h"

Test(strncpy, normal) {
    char *str;

    str = malloc(sizeof(char) * 6);
    memset(str, 'a', 6);
    cr_assert_str_eq(stu_strncpy(str, "hello", 3), "hel");
    free(str);
}

Test(strncpy, str_smaller) {
    char *str;

    str = malloc(sizeof(char) * 4);
    cr_assert_str_eq(stu_strncpy(str, "he", 3), "he");
    free(str);
}

Test(strncpy, mem_correctness) {
    char *str1;
    char *str2;

    str1 = malloc(sizeof(char) * 4);
    str2 = malloc(sizeof(char) * 4);
    stu_strncpy(str1, "he", 50);
    stu_strncpy(str2, "ta", 50);
    cr_assert_str_eq(str1, "he");
    cr_assert_str_eq(str2, "ta");
    free(str1);
    free(str2);
}

