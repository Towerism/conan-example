#include "generate_md5.hh"
#include <iostream>

int main(int argc, char** argv)
{
    int a = 5;
    const auto md5 = generate_md5();
    std::cout << md5 << std::endl;
    return 0;
}
