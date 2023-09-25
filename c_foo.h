
#ifdef __cplusplus
extern "C"
{
#endif

struct foo_rgb_t {int r; int g; int b;};

void   foo_alpha(int count);
void   foo_bravo(const char* s);
double foo_pi();
void   foo_print_rgb(struct foo_rgb_t colors);


#ifdef __cplusplus
}
#endif
