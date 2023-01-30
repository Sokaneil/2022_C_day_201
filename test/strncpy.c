#include <criterion/criterion.h>
#include "stu.h"

Test(strncpy, normal) {
    char *str;

    str = malloc(sizeof(char) * 6);
    cr_assert_str_eq(stu_strncpy(str, "hello", 3), "hel");
    free(str);
}
