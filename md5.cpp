#include "generate_md5.hh"

#include <iostream>


int main(int argc, char** argv)
{
  const auto md5 = generate_md5();
  std::cout << md5 << std::endl;
  return 0;
}
