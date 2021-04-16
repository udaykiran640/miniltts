#include"funs.h"
#include"unity.h"

void setUp()
{

}

void tearDown()
{

}

struct user
{
    char name[30];
    long int cnumber;
    char ptype[20];
    int ext;
    char place[20];
    char country[20];
};

struct user u;

long int size;

FILE *fptr, *ftemp;



int main()
{
    UNITY_BEGIN();

    RUN_TEST(display_number);

    return UNITY_END();
}

int display_number()
{   
    TEST_ASSERT_EQUAL_INT(2,display_number());
}
