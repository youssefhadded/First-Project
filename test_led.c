#include "unity/unity.h"
#include "led.h"

// --- Setup / Teardown ---
void setUp(void) {
    LED_Init();
}
void tearDown(void) {
    // rien à nettoyer
}

// --- Tests ---
void test_LED_Init(void) {
    TEST_ASSERT_EQUAL_UINT8(0, LED_GetState());
}

void test_LED_On(void) {
    LED_On();
    TEST_ASSERT_EQUAL_UINT8(1, LED_GetState());
}

void test_LED_Off(void) {
    LED_On();
    LED_Off();
    TEST_ASSERT_EQUAL_UINT8(0, LED_GetState());
}

void test_LED_Toggle(void) {
    LED_Toggle();
    TEST_ASSERT_EQUAL_UINT8(1, LED_GetState());
    LED_Toggle();
    TEST_ASSERT_EQUAL_UINT8(0, LED_GetState());
}

// --- Main Unity ---
int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_LED_Init);
    RUN_TEST(test_LED_On);
    RUN_TEST(test_LED_Off);
    RUN_TEST(test_LED_Toggle);

    return UNITY_END();
}
