#include <gtest/gtest.h>
#include "../head.h"
#include <string>

TEST(A, TestBasics) {
    int a[] = {1,2,3,4,8,9};
    int size = sizeof a / sizeof a[0];
    char str[200] = {};
    func(a,size, str);
    std::string ans = str;
    EXPECT_EQ(ans,"1->4,8->9");
}

TEST(B, TestBasics) {
    int a[] = {1,2,3,4,8,10,12};
    int size = sizeof a / sizeof a[0];
    char str[200] = {};
    func(a,size, str);
    std::string ans = str;
    EXPECT_EQ(ans, "1->4,8,10,12");
}
