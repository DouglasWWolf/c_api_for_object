#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "foo.h"


void CFoo::alpha(int count)
{
    for (int i=0; i<count; ++i) printf("Hello world %i\n", i);
}

void CFoo::bravo(const char* s)
{
    printf("%s\n", s);
}


double CFoo::pi()
{
    return 3.14159;
}

void CFoo::print_rgb(rgb_t colors)
{
    printf("red = %i, blue = %i, green = %i\n", colors.r, colors.b, colors.g);    
}