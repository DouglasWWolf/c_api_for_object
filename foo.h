
// This is just a dummy class to demonstrate the concept of wrapping an object in a C API
class CFoo
{
public:

    struct rgb_t {int r; int g; int b;};

    void alpha(int count);

    void bravo(const char* s);
    
    double pi();

    void print_rgb(rgb_t colors);
};
