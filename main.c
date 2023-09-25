#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "c_foo.h"


int main()
{
    foo_alpha(3);
    foo_bravo("This string should be printed");
    printf("pi = %1.5lf\n", foo_pi());

    struct foo_rgb_t colors = {10, 123, 254};

    foo_print_rgb(colors);

    exit(0);

}