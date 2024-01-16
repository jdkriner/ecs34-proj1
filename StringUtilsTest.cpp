#include <gtest/gtest.h>
#include "StringUtils.h"

TEST(StringUtilsTest, SliceTest){
    
}

TEST(StringUtilsTest, Capitalize){
    ASSERT_EQ("", StringUtils::Capitalize(""));
    ASSERT_EQ("Capitalized string", StringUtils::Capitalize("capitalized string"));
    ASSERT_EQ("Capital", StringUtils::Capitalize("cApItal"));
    ASSERT_EQ("Caps", StringUtils::Capitalize("CAPS"));
    ASSERT_EQ("Letter", StringUtils::Capitalize("Letter"));
    
}

TEST(StringUtilsTest, Upper){
    ASSERT_EQ("", StringUtils::Upper(""));
    ASSERT_EQ("UPPER", StringUtils::Upper("upper"));
    ASSERT_EQ("UPPERCASE", StringUtils::Upper("UPPERCASE"));
    ASSERT_EQ("UPPER CHARS", StringUtils::Upper("Upper chars"));
    
}

TEST(StringUtilsTest, Lower){
    ASSERT_EQ("", StringUtils::Lower(""));
    ASSERT_EQ("lower", StringUtils::Lower("LOWER"));
    ASSERT_EQ("lowercase", StringUtils::Lower("lower"));
    ASSERT_EQ("lower chars", StringUtils::Lower("LoWEr CHars"));
    
}

TEST(StringUtilsTest, LStrip){
    ASSERT_EQ("", StringUtils::LStrip(""));
    ASSERT_EQ("", StringUtils::LStrip("   "));
    ASSERT_EQ("Hello", StringUtils::LStrip("   Hello"));
    ASSERT_EQ("NoLeft   ", StringUtils::LStrip("NoLeft   "));
    ASSERT_EQ("Tableft", StringUtils::LStrip("  Tableft"));
    
}

TEST(StringUtilsTest, RStrip){
    ASSERT_EQ("", StringUtils::RStrip(""));
    ASSERT_EQ("", StringUtils::RStrip("   "));
    ASSERT_EQ("Hello", StringUtils::RStrip("Hello   "));
    ASSERT_EQ("   NoRight", StringUtils::RStrip("   NoRight"));
    ASSERT_EQ("Tabright", StringUtils::RStrip("Tabright "));
    
}

TEST(StringUtilsTest, Strip){
    ASSERT_EQ("", StringUtils::Strip(""));
    ASSERT_EQ("", StringUtils::Strip("   "));
    ASSERT_EQ("Hello", StringUtils::Strip("   Hello   "));
    ASSERT_EQ("NoSpaces", StringUtils::Strip("NoSpaces"));
    ASSERT_EQ("Tabs", StringUtils::Strip("  Tabs    "));
}

TEST(StringUtilsTest, Center){
    
}

TEST(StringUtilsTest, LJust){
    
}

TEST(StringUtilsTest, RJust){
    
}

TEST(StringUtilsTest, Replace){
    
}

TEST(StringUtilsTest, Split){
    
}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

