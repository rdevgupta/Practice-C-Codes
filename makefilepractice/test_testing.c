#include "unity_internals.h"
#include "unity.h"
#include "testing.h"
void setUp(){ }
void tearDown(){}
void test(void)
{
    TEST_ASSERT_EQUAL(30, sum(20,10));
    TEST_ASSERT_EQUAL(10, div(20,10));
}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test);
    return UNITY_END();
}