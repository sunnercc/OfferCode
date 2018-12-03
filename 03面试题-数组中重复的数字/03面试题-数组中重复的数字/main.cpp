//
//  main.m
//  03面试题-数组中重复的数字
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 ifuwo. All rights reserved.
//

#include <iostream>
#include "MyClass.cpp"


void print(char* str,int arr[], int size)
{
    std::cout << str << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n" << std::endl;
}

void testBubbleSort()
{
    int arr[] = {3, 5, 6, 3, 2, 0, 9};
    MyClass myclass;
    myclass.bubbleSort(arr, 7);
    print("bubbleSort", arr, 7);
}

void testSelectSort()
{
    int arr[] = {3, 5, 6, 3, 2, 0, 9};
    MyClass myclass;
    myclass.selectSort(arr, 7);
    print("selectSort", arr, 7);
}

void testInsertSort()
{
    int arr[] = {3, 5, 6, 3, 2, 0, 9};
    MyClass myclass;
    myclass.insertSort(arr, 7);
    print("insertSort", arr, 7);
}

int main() {
    
    testBubbleSort();
    testSelectSort();
    testInsertSort();
}
