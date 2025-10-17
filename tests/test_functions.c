#include <criterion/criterion.h>
#include "../refactor-code/functions.h"

Test(sample_test, hello_world) {
    cr_assert_eq(1 + 1, 2, "1 + 1 should equal 2");
}

Test(iterative_suite, test_iterative_sum_positive) {
    cr_assert_eq(iterative(5), 15, "iterative(5) should be 15");
}

Test(iterative_suite, test_iterative_sum_zero) {
    cr_assert_eq(iterative(0), 0, "iterative(0) should be 0");
}

Test(iterative_suite, test_iterative_sum_one) {
    cr_assert_eq(iterative(1), 1, "iterative(1) should be 1");
}

Test(recursive_suite, test_recursive_sum_positive) {
    cr_assert_eq(recursive(5), 15, "recursive(5) should be 15");
}

Test(recursive_suite, test_recursive_sum_zero) {
    cr_assert_eq(recursive(0), 0, "recursive(0) should be 0");
}

Test(recursive_suite, test_recursive_sum_one) {
    cr_assert_eq(recursive(1), 1, "recursive(1) should be 1");
}
