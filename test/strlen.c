#include <criterion/criterion.h>
#include "stu.h"

Test(strlen, normal) {
    cr_assert_eq(stu_strlen("hello"), 5);
}
Test(strlen, empty) {
    cr_assert_eq(stu_strlen(""), 0);
}
