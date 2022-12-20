#include <gtest/gtest.h>

#include <GenerateMD5/generate_md5.hh>

TEST(GenerateMd5, ReturnsAConstantString)
{
    const auto md5 = GenerateMd5();
    EXPECT_EQ("c3fcd3d76192e4007dfb496cca67e13b", md5);
}
