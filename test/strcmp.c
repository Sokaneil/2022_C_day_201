#include <criterion/criterion.h>
#include "stu.h"

Test(strcmp, bigger) {
    cr_assert_eq(stu_strcmp("5", "2"), 3);
}
Test(strcmp, same) {
    cr_assert_eq(stu_strcmp("5", "5"), 0);
}
Test(strcmp, smallerr) {
    cr_assert_eq(stu_strcmp("4", "8"), -4);
}
