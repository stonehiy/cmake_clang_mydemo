
#include <stdio.h>
#include <stdlib.h>
#include "../include/test.h"
#include "../include/struct.h"

void testArr()
{
    int arr[] = {110,
                 1,
                 2,
                 3,
                 1};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("arr => %d \n", arr[i]);
    }
    printf("sizeof(arr) => %d \n", sizeof(arr));
    printf("sizeof(arr[0]) => %d \n", sizeof(arr[0]));
}
void test2Arr()
{
    int arr[][3] = {{1, 2, 3}, {11, 12, 13}};
    printf("test2Arr sizeof(arr) => %d \n", sizeof(arr));
    printf("test2Arr sizeof(arr[0]) => %d \n", sizeof(arr[0]));
}
void testPoint()
{
    printf("testPoint  => %d \n", sizeof(int *));
    printf("testPoint  => %d \n", sizeof(long *));

    int a = 10;
    int *intP = &a; //取地址
    printf("testPoint  *intP => %d \n", *intP);

    int *intPP = (int *)malloc(sizeof(int));
    *intPP = 1001;
    printf("testPoint  *intPP => %d \n", *intPP);
    printf("testPoint  intPP => %p \n", intPP);
    free(intPP);
}

void testStruct()
{
    struct Student stu;
    stu.age = 1;
    stu.height = 121;
    stu.name = "LiLi";
    stu.score = 20;

    printf(" stu.name = %s", stu.name);
}

int main(int argc, char const *argv[])
{
    /* code */
    printf("这是c语言 \n");

    testArr();
    test2Arr();
    testPoint();

    test();
    testStruct();

    return 0;
}
