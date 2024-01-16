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
    ASSERT_EQ("Evenwidth", StringUtils::Center("Evenwidth", 9));
    ASSERT_EQ("   Even   ", StringUtils::Center("Even", 10));
    ASSERT_EQ("  Od ", StringUtils::Center("Od", 5));

}

TEST(StringUtilsTest, LJust){
    ASSERT_EQ("     ", StringUtils::LJust("", 5));
    ASSERT_EQ("Five     ", StringUtils::LJust("Five", 9));
    ASSERT_EQ("NoAdd", StringUtils::LJust("NoAdd", 5));
    ASSERT_EQ("3Left   ", StringUtils::LJust("   3Left", 8));
    ASSERT_EQ("2LR     ", StringUtils::LJust("  2LR  ", 8));
    
}

TEST(StringUtilsTest, RJust){
    ASSERT_EQ("     ", StringUtils::RJust("", 5));
    ASSERT_EQ("     Five", StringUtils::RJust("Five", 9));
    ASSERT_EQ("NoAdd", StringUtils::RJust("NoAdd", 5));
    ASSERT_EQ("    3Left", StringUtils::RJust("   3Left", 9));
    ASSERT_EQ("       2LR", StringUtils::RJust("  2LR  ", 10));
    
}

TEST(StringUtilsTest, Replace){
    ASSERT_EQ("Nothing", StringUtils::Replace("Nothing", "aaa", "bbb"));
    ASSERT_EQ("EVERYTHING", StringUtils::Replace("Everything", "Everything", "EVERYTHING"));
    ASSERT_EQ("1Letter", StringUtils::Replace("1Lxttxr", "x", "e"));
    ASSERT_EQ("3xxxaa", StringUtils::Replace("3aaaaaa", "aaa", "xxx"));
    ASSERT_EQ("Difxth", StringUtils::Replace("Diflength", "leng", "x"));
}

TEST(StringUtilsTest, Split){
    //ASSERT_EQ(<"NoSplit">, StringUtils::Split("NoSplit", "x"));
    //ASSERT_EQ("<'la', 'la', 'la'>", StringUtils::Split("laxlaxlax", "x"));
    //ASSERT_EQ(<"this", "was", "split">, StringUtils::Split("this was split", ""));
    //ASSERT_EQ(<"irst">, StringUtils::Split("First", "F"));
    //ASSERT_EQ(<"Las">, StringUtils::Split("Last", "t"));
    
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

