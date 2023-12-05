#include <stdio.h>
#include <stdlib.h>

#include "test_utils.h"

void massert(unsigned int condition, const char *message) {
    if (condition == 0) {
        fprintf(stderr, "%s", message);
        exit(1);
    }
}
