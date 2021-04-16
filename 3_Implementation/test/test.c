#include"funs.h"
#include"unity.h"

void setUp()
{

}

void tearDown()
{

}

void test_display_number(void);


int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_display_number);

    return UNITY_END();
}

void test_display_number(void)
{   
    TEST_ASSERT_EQUAL(-1,display_number());
}
