#include "foo.h"
#include "c_foo.h"

static CFoo object;



void foo_alpha(int count) { object.alpha(count);}

void foo_bravo(const char* s) {object.bravo(s);}

double foo_pi() {return object.pi();}

