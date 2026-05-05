#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {92, 103, 11, 9, 5};
    assert(score_signal(signal_case_1) == 221);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {82, 101, 26, 25, 12};
    assert(score_signal(signal_case_2) == 84);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {83, 91, 14, 23, 8};
    assert(score_signal(signal_case_3) == 102);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
