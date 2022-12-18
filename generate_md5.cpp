#include "Poco/DigestStream.h"
#include "Poco/MD5Engine.h"

#include <iostream>
#include <string>

auto GenerateMd5() -> std::string
{
    Poco::MD5Engine md5;
    Poco::DigestOutputStream digest_stream(md5);
    digest_stream << "abcdefghijklmnopqrstuvwxyz";
    digest_stream.close();
    return Poco::DigestEngine::digestToHex(md5.digest());
}
