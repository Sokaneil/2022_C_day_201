#include <criterion/criterion.h>
#include "stu.h"

Test(strchr, normal) {
    char *str1;
    //char *str;

    str1 = malloc(sizeof(char) * 28);
    stu_strcpy(str1, "THE ONE PIECE IS REAL!");
    cr_assert_str_eq(stu_strchr(str1, 'O'), "E ONE PIECE IS REAL!");
    free(str1);
}
