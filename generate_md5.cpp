#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

#include <iostream>
#include <string>

std::string generate_md5()
{
  Poco::MD5Engine md5;
  Poco::DigestOutputStream ds(md5);
  ds << "abcdefghijklmnopqrstuvwxyz";
  ds.close();
  return Poco::DigestEngine::digestToHex(md5.digest());
}
