//
//  Fibonacci.cpp
//  10面试题-斐波那契数列
//
//  Created by ifuwo on 2018/12/4.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <stdio.h>

// 面试题10：斐波那契数列
// 题目：写一个函数，输入n，求斐波那契（Fibonacci）数列的第n项

#include <cassert>

struct Matrix2By2
{
    Matrix2By2
    (
     long long m00 = 0,
     long long m01 = 0,
     long long m10 = 0,
     long long m11 = 0
     )
    :m_00(m00), m_01(m01), m_10(m10), m_11(m11)
    {
    }
    
    long long m_00;
    long long m_01;
    long long m_10;
    long long m_11;
};


class Fibonacci {
    
    
public:
    
    
    // 递归
    long long Fibonacci_Solution1(unsigned int n)
    {
        if (n <= 0)
        {
            return 0;
        }
        
        if (n == 1)
        {
            return 1;
        }
        return Fibonacci_Solution1(n-1) + Fibonacci_Solution1(n-2);
    }
    
    // 循环
    long long Fibonacci_Solution2(unsigned int n)
    {
        if (n <= 0)
        {
            return 0;
        }
        
        if (n == 1)
        {
            return 1;
        }
        
        long long fibNMinusOne = 0;
        long long fibNMinusTwo = 1;
        long long fibN = 0;
        for(unsigned int i = 2; i <= n; ++ i)
        {
            fibN = fibNMinusOne + fibNMinusTwo;
            fibNMinusOne = fibNMinusTwo;
            fibNMinusTwo = fibN;
        }
        return fibN;
    }
    
    // 矩阵 ？
    Matrix2By2 MatrixMultiply
    (
     const Matrix2By2& matrix1,
     const Matrix2By2& matrix2
     )
    {
        return Matrix2By2(
                          matrix1.m_00 * matrix2.m_00 + matrix1.m_01 * matrix2.m_10,
                          matrix1.m_00 * matrix2.m_01 + matrix1.m_01 * matrix2.m_11,
                          matrix1.m_10 * matrix2.m_00 + matrix1.m_11 * matrix2.m_10,
                          matrix1.m_10 * matrix2.m_01 + matrix1.m_11 * matrix2.m_11);
    }
    
    Matrix2By2 MatrixPower(unsigned int n)
    {
        assert(n > 0);
        
        Matrix2By2 matrix;
        if(n == 1)
        {
            matrix = Matrix2By2(1, 1, 1, 0);
        }
        else if(n % 2 == 0)
        {
            matrix = MatrixPower(n / 2);
            matrix = MatrixMultiply(matrix, matrix);
        }
        else if(n % 2 == 1)
        {
            matrix = MatrixPower((n - 1) / 2);
            matrix = MatrixMultiply(matrix, matrix);
            matrix = MatrixMultiply(matrix, Matrix2By2(1, 1, 1, 0));
        }
        
        return matrix;
    }
    
    //
    long long Fibonacci_Solution3(unsigned int n)
    {
        int result[2] = {0, 1};
        if(n < 2)
            return result[n];
        
        Matrix2By2 PowerNMinus2 = MatrixPower(n - 1);
        return PowerNMinus2.m_00;
    }
    
};
