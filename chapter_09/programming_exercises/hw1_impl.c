#include "hw1_lib.h"

double get_min(const double *f_num, const double *s_num) {
    return *f_num < *s_num ? *f_num : *s_num;
}
