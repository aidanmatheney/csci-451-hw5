/*
 * Aidan Matheney
 * aidan.matheney@und.edu
 *
 * CSCI 451 HW5
 */

#include "../include/hw5.h"

#include "../include/util/macro.h"

#include <stdlib.h>

int main(int const argc, char ** const argv) {
    static char const * const inFilePaths[] = {
        "hw5-1.in",
        "hw5-2.in",
        "hw5-3.in"
    };
    hw5(inFilePaths, ARRAY_LENGTH(inFilePaths), "hw5.out");
    return EXIT_SUCCESS;
}
