#include "generate_md5.hh"
#include <iostream>

auto main(int /*argc*/, char** /*argv*/) -> int
{
    const auto md5 = GenerateMd5();
    std::cout << md5 << std::endl;
    return 0;
}
