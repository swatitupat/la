#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

void setUp(){}
void tearDown(){}
char name[100];
bool check;
void test_sum(void)
{
    TEST_ASSERT_EQUAL(1,check);
}
void validate(){
    printf("Enter the name of Ticket holder: ");
    scanf("%s",name);
    check=present(name);
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    UNITY_END(); 
    if(check==1){
        printf("Ticket Holder Exist... Validate your tickets.. \n");
    }else{
        printf("RECORD NOT FOUND !!!");
    }
    printf("\nPress any key to go back to Main menu_");
    getchar();
    getchar();
}

