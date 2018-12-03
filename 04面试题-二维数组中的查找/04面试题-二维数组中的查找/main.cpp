//
//  main.cpp
//  04面试题-二维数组中的查找
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 ifuwo. All rights reserved.
//

#include <iostream>
#include "MyClass.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int matrix[4][4] = {
        {1, 2, 8, 9},
        {2, 4, 9, 12},
        {4, 7, 10, 13},
        {6, 8, 11, 15},
    };
    int rows = 4;
    int columns = 4;
    int number = 7;
    
    MyClass myclass;
    int find = myclass.Find((int *)matrix, rows, columns, number);
    std::cout << find;
    return 0;
}
