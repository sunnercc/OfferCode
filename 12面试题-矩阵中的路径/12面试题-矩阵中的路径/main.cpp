//
//  main.cpp
//  12面试题-矩阵中的路径
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <iostream>
#include "Myclass.cpp"

Myclass myclass;

void test(const char* testName, const char* matrix, int rows, int cols, const char* str, bool expected)
{
    if (testName != nullptr) {
        printf("%s begins: ", testName);
    }
    if (myclass.hasPath(matrix, rows, cols, str) == expected) {
        printf("passed.\n");
    } else {
        printf("failed.\n");
    }
}

// abtg
// cfcs
// jdeh

// bfce
void test1()
{
    const char* matrix = "abtgcfcsjdeh";
    const char* str = "bfce";
    
    test("test1", (const char*)matrix, 3, 4, str, true);
}

// abce
// sfcs
// adee

// see
void test2()
{
    const char* matrix = "abcesfcsadee";
    const char* str = "see";
    
    test("test2", matrix, 3, 4, str, true);
}

// abtg
// cfcs
// jdeh

// abfb
void test3()
{
    const char* matrix = "abtgcfcsjdeh";
    const char* str = "abfb";
    
    test("test3", (const char*)matrix, 3, 4, str, false);
}

// abcehjig
// sfcslopq
// adeemnoe
// adidejfm
// vceifggs

// slhecceidejfggfie
void test4()
{
    const char* matrix = "abcehjigsfcslopqadeemnoeadidejfmvceifggs";
    const char* str = "slhecceidejfggfie";
    
    test("test4", (const char*)matrix, 5, 8, str, true);
}

// abcehjig
// sfcslopq
// adeemnoe
// adidejfm
// vceifggs

// sggfiecvaasabcehjigqem
void test5()
{
    const char* matrix = "abcehjigsfcslopqadeemnoeadidejfmvceifggs";
    const char* str = "sggfiecvaasabcehjigqem";
    
    test("test5", (const char*)matrix, 5, 8, str, true);
}

// abcehjig
// sfcslopq
// adeemnoe
// adidejfm
// vceifggs

// sggfiecvaasabceejigoem
void test6()
{
    const char* matrix = "abcehjigsfcslopqadeemnoeadidejfmvceifggs";
    const char* str = "sggfiecvaasabceejigoem";
    
    test("test6", (const char*)matrix, 5, 8, str, false);
}

// abcehjig
// sfcslopq
// adeemnoe
// adidejfm
// vceifggs

// sggfiecvaasabcehjigqems
void test7()
{
    const char* matrix = "abcehjigsfcslopqadeemnoeadidejfmvceifggs";
    const char* str = "sggfiecvaasabcehjigqems";
    
    test("test7", (const char*)matrix, 5, 8, str, false);
}

// aaaa
// aaaa
// aaaa

// aaaaaaaaaaaa
void test8()
{
    const char* matrix = "aaaaaaaaaaaa";
    const char* str = "aaaaaaaaaaaa";
    
    test("test8", (const char*)matrix, 3, 4, str, true);
}

// aaaa
// aaaa
// aaaa

// aaaaaaaaaaaaa
void test9()
{
    const char* matrix = "aaaaaaaaaaaa";
    const char* str = "aaaaaaaaaaaaa";
    
    test("test9", (const char*)matrix, 3, 4, str, false);
}

// a

// a
void test10()
{
    const char* matrix = "a";
    const char* str = "a";
    
    test("test10", (const char*)matrix, 1, 1, str, true);
}

// a

// b
void test11()
{
    const char* matrix = "a";
    const char* str = "b";
    
    test("test11", (const char*)matrix, 1, 1, str, false);
}

void test12()
{
    test("test12", nullptr, 0, 0, nullptr, false);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
    test12();
    return 0;
}
