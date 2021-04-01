#include <gtest/gtest.h>
#include <string>

#include "../src/EnvironImpl.h"

TEST(Suite1, Test1){
    EnvironImpl impl;
    std::string env = impl.Get("CPPENV_TEST");
    std::string env_ = "123";
    EXPECT_EQ(env, env_);
    std::string empty = impl.Get("CPPENV_EMPTY");
    std::string empty_ = "";
    EXPECT_EQ(empty, empty_);    
}
