#include <criterion/criterion.h>
#include "stu.h"

Test(swap_int, normal) {
    int i;
    int j;

    i = 1456;
    j = 465123;
    swap_int(&i, &j);
    cr_assert_eq(i, 465123);
    cr_assert_eq(j, 1456);
}
