//
//  main.cpp
//  11面试题-旋转数组的最小数字
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <iostream>
#include "Myclass.cpp"


Myclass myclass;

void Test(int* numbers, int length, int expected)
{
    int result = 0;
    try {
        result = myclass.Min(numbers, length);
        
        for (int i = 0; i < length; ++i) {
            printf("%d ", numbers[i]);
        }
        
        if (result == expected) {
            printf("\tpass\n");
        } else {
            printf("\tfailed\n");
        }
    } catch (...) {
        if (numbers == nullptr) {
            printf("test passed.\n");
        } else {
            printf("test failed.\n");
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    // 典型输入，单调升序的数组的一个旋转
    int array1[] = {3, 4, 5, 1, 2};
    Test(array1, sizeof(array1) / sizeof(int), 1);
    
    // 有重复数字，并且重复的数字刚好是最小的数字
    int array2[] = {3, 4, 5, 1, 1, 2};
    Test(array2, sizeof(array2) / sizeof(int), 1);
    
    // 有重复数字，但重复的数字不是第一个数字和最后一个数字
    int array3[] = {3, 4, 5, 1, 2, 2};
    Test(array3, sizeof(array3) / sizeof(int), 1);
    
    // 有重复的数字，并且重复的数字刚好是第一个数字和最后一个数字
    int array4[] = {1, 0, 1, 1, 1};
    Test(array4, sizeof(array4) / sizeof(int), 0);
    
    // 单调升序数组，旋转0个元素，也就是单调升序数组本身
    int array5[] = {1, 2, 3, 4, 5};
    Test(array5, sizeof(array5) / sizeof(int), 1);
    
    // 数组中只有一个数字
    int array6[] = {2};
    Test(array6, sizeof(array6) / sizeof(int), 2);
    
    // 输入nullptr
    Test(nullptr, 0, 0);
    
    return 0;
}
