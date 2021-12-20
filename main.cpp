#include <iostream>
#include "include/foo.h"
#include "include/bar.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Foo foo;
    foo.Show();
    Bar bar;
    bar.Show();
    return 0;
}
