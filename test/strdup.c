#include <criterion/criterion.h>
#include "stu.h"

Test(strdup, normal) {
    char *str;
    char *res;

    res = "LUIGI";
    str = stu_strdup(res);
    cr_assert_str_eq(str, "LUIGI");
    free(str);
}
