#include <criterion/criterion.h>
#include "stu.h"

Test(strndup, normal) {
    char *str;
    char *res;

    res = "LUIGI";
    str = stu_strndup(res, 4);
    cr_assert_str_eq(str, "LUIG");
}
