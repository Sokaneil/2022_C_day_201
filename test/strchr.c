#include <criterion/criterion.h>
#include "stu.h"
#include <stddef.h>

Test(strchr, normal) {
    char *str;

    str = "THE ONE PIECE IS REAL!";
    cr_assert_str_eq(stu_strchr(str, 'O'), "ONE PIECE IS REAL!");
}
Test(strchr, numbers) {
    char *str;

    str = "5645464565";
    cr_assert_str_eq(stu_strchr(str, '4'), "45464565");
}
Test(strchr, empty) {
    cr_assert_eq(stu_strchr("bruhbruh", '\0'), NULL);
}

Test(strchr, no_match) {
    cr_assert_eq(stu_strchr("bruhbruh", 'w'), NULL);
}
