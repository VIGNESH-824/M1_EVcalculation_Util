#include "unity.h"
#include "EVcalculation.h"
vehicle_param test_val1 = {2292.000000, 1046.187500};

void setUp()
{
}
void tearDown()
{
}

void test_req_value(void)
{
    TEST_ASSERT_EQUAL(28, req_value(1,120,50).series);
    TEST_ASSERT_EQUAL(19, req_value(1,120,50).parallel);

    TEST_ASSERT_EQUAL(33, req_value(2,140,500).series);
    TEST_ASSERT_EQUAL(119, req_value(2,140,500).parallel);

}

void test_vehicle_param(void)
{
    TEST_ASSERT_EQUAL(2292.000000, vehicle_param1(250, 0.015, 1.3, 60, 8.3, 0.25, 0.9).RPM);
    TEST_ASSERT_EQUAL(1046.187500, vehicle_param1(250, 0.015, 1.3, 60, 8.3, 0.25, 0.9).torque);

    TEST_ASSERT_EQUAL(1660.869507, vehicle_param1(260, 0.014, 2, 40, 10, 0.23, 0.9).RPM);
    TEST_ASSERT_EQUAL(930.037231, vehicle_param1(260, 0.014, 2, 40, 10, 0.23, 0.9).torque);

}

void test_electrical_param(void)
{
    TEST_ASSERT_EQUAL(2037.333374, electrical_param1(test_val1,1).req_volt);
    TEST_ASSERT_EQUAL(653.867188, electrical_param1(test_val1,1).req_curr);

    TEST_ASSERT_EQUAL(1666.909058, electrical_param1(test_val1,2).req_volt);
    TEST_ASSERT_EQUAL(174.364578, electrical_param1(test_val1,2).req_curr);

}


int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_req_value);
  RUN_TEST(test_vehicle_param);
  RUN_TEST(test_electrical_param);

  return UNITY_END();
}
