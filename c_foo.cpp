#include "foo.h"
#include "c_foo.h"

static CFoo object;



void foo_alpha(int count) { object.alpha(count);}

void foo_bravo(const char* s) {object.bravo(s);}

double foo_pi() {return object.pi();}

void foo_print_rgb(foo_rgb_t colors)
{
    CFoo::rgb_t s;
    s.r = colors.r;
    s.g = colors.g;
    s.b = colors.b;
    object.print_rgb(s);
}