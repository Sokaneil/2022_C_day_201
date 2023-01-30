#include <criterion/criterion.h>
#include "stu.h"

Test(atoi, number) {
    cr_assert_eq(stu_atoi("32331"), 32331);
}
Test(atoi, empty) {
    cr_assert_eq(stu_atoi(""), 0);
}
