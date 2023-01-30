#include <criterion/criterion.h>
#include "stu.h"

Test(isdigit, capital) {
    cr_assert_eq(is_num('5'), 1);
}
Test(isdigit, small) {
    cr_assert_eq(is_num('9'), 1);
}
Test(isdigit, not_num) {
    cr_assert_eq(is_num('a'), 0);
}
