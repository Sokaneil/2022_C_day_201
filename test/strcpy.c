#include <criterion/criterion.h>
#include "stu.h"

Test(strcpy, normal) {
    char *str;

    str = malloc(sizeof(char) * 6);
    cr_assert_str_eq(stu_strcpy(str, "hello"), "hello");
    free(str);
}
