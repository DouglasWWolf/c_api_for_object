#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "c_foo.h"


int main()
{
    foo_alpha(3);
    foo_bravo("This string should be printed");
    printf("pi = %1.5lf\n", foo_pi());

    exit(0);

}