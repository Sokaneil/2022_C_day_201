#include <criterion/criterion.h>
#include "stu.h"

Test(isalpha, capital) {
    cr_assert_eq(is_alpha('T'), 1);
}
Test(isalpha, small) {
    cr_assert_eq(is_alpha('g'), 1);
}
Test(isalpha, not_alpha) {
    cr_assert_eq(is_alpha('4'), 0);
}
