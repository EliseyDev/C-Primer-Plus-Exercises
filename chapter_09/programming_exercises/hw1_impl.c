/* Devise a function called  min(x,y) that returns the smaller of two double values. Test
the function with a simple driver. */

#include "hw1_lib.h"

double get_min(const double *f_num, const double *s_num) {
    return *f_num < *s_num ? *f_num : *s_num;
}
