#include <criterion/criterion.h>
#include "stu.h"

Test(strcat, normal) {
    char *str1;

    str1 = malloc(sizeof(char) * 19);
    stu_strcpy(str1, "I Love");
    stu_strcat(str1, " Programming.");
    cr_assert_str_eq(str1, "I Love Programming.");
    free(str1);
}

