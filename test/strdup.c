#include <criterion/criterion.h>
#include "stu.h"

Test(strdup, normal) {
    char *str;
    char *res;

    res = "LUIGI";
    str = stu_strdup(res);
    cr_assert_str_eq(str, "LUIGI");
}
Test(strdup, empty) {
    char *str;
    char *res;

    res = "";
    str = stu_strdup(res);
    cr_assert_str_eq(str, "");
}

