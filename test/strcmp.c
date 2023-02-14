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

Test(strcmp, str) {
    cr_expect(stu_strcmp("hello", "hello") == 0);
    cr_expect(stu_strcmp("hallo", "hello") != 0);
    cr_expect(stu_strcmp("hello", "hallo") != 0);
    cr_expect(stu_strcmp("hell", "hello") != 0);
    cr_expect(stu_strcmp("hello", "hell") != 0);
    cr_expect(stu_strcmp("", "hello") != 0);
    cr_expect(stu_strcmp("hello", "") != 0);
}
