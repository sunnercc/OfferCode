//
//  main.cpp
//  10面试题-斐波那契数列
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <iostream>
#include "Fibonacci.cpp"

Fibonacci fibonacci;

void Test(int n, int expected)
{
    if(fibonacci.Fibonacci_Solution1(n) == expected)
        printf("Test for %d in solution1 passed.\n", n);
    else
        printf("Test for %d in solution1 failed.\n", n);
    
    if(fibonacci.Fibonacci_Solution2(n) == expected)
        printf("Test for %d in solution2 passed.\n", n);
    else
        printf("Test for %d in solution2 failed.\n", n);
    
    if(fibonacci.Fibonacci_Solution3(n) == expected)
        printf("Test for %d in solution3 passed.\n", n);
    else
        printf("Test for %d in solution3 failed.\n", n);
}

int main(int argc, char* argv[])
{
    Test(0, 0);
    Test(1, 1);
    Test(2, 1);
    Test(3, 2);
    Test(4, 3);
    Test(5, 5);
    Test(6, 8);
    Test(7, 13);
    Test(8, 21);
    Test(9, 34);
    Test(10, 55);
    
    Test(40, 102334155);
    
    return 0;
}
