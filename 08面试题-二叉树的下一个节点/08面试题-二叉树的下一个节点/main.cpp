//
//  main.cpp
//  08面试题-二叉树的下一个节点
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <iostream>
#include "MyClass.cpp"

MyClass myclass;

void Test(char* testName, BinaryTreeNode* pNode, BinaryTreeNode* expected)
{
    if(testName != nullptr)
        printf("%s begins: ", testName);
    
    BinaryTreeNode* pNext = myclass.GetNext(pNode);
    if(pNext == expected)
        printf("Passed.\n");
    else
        printf("FAILED.\n");
}


//            8
//        6      10
//       5 7    9  11

void Test1_7()
{
    BinaryTreeNode* pNode8 = myclass.CreateBinaryTreeNode(8);
    BinaryTreeNode* pNode6 = myclass.CreateBinaryTreeNode(6);
    BinaryTreeNode* pNode10 = myclass.CreateBinaryTreeNode(10);
    BinaryTreeNode* pNode5 = myclass.CreateBinaryTreeNode(5);
    BinaryTreeNode* pNode7 = myclass.CreateBinaryTreeNode(7);
    BinaryTreeNode* pNode9 = myclass.CreateBinaryTreeNode(9);
    BinaryTreeNode* pNode11 = myclass.CreateBinaryTreeNode(11);
    
    myclass.ConnectTreeNodes(pNode8, pNode6, pNode10);
    myclass.ConnectTreeNodes(pNode6, pNode5, pNode7);
    myclass.ConnectTreeNodes(pNode10, pNode9, pNode11);
    
    Test("Test1", pNode8, pNode9);
    Test("Test2", pNode6, pNode7);
    Test("Test3", pNode10, pNode11);
    Test("Test4", pNode5, pNode6);
    Test("Test5", pNode7, pNode8);
    Test("Test6", pNode9, pNode10);
    Test("Test7", pNode11, nullptr);
    
    myclass.DestroyTree(pNode8);
}

//            5
//          4
//        3
//      2
void Test8_11()
{
    BinaryTreeNode* pNode5 = myclass.CreateBinaryTreeNode(5);
    BinaryTreeNode* pNode4 = myclass.CreateBinaryTreeNode(4);
    BinaryTreeNode* pNode3 = myclass.CreateBinaryTreeNode(3);
    BinaryTreeNode* pNode2 = myclass.CreateBinaryTreeNode(2);
    
    myclass.ConnectTreeNodes(pNode5, pNode4, nullptr);
    myclass.ConnectTreeNodes(pNode4, pNode3, nullptr);
    myclass.ConnectTreeNodes(pNode3, pNode2, nullptr);
    
    Test("Test8", pNode5, nullptr);
    Test("Test9", pNode4, pNode5);
    Test("Test10", pNode3, pNode4);
    Test("Test11", pNode2, pNode3);
    
    myclass.DestroyTree(pNode5);
}

//        2
//         3
//          4
//           5
void Test12_15()
{
    BinaryTreeNode* pNode2 = myclass.CreateBinaryTreeNode(2);
    BinaryTreeNode* pNode3 = myclass.CreateBinaryTreeNode(3);
    BinaryTreeNode* pNode4 = myclass.CreateBinaryTreeNode(4);
    BinaryTreeNode* pNode5 = myclass.CreateBinaryTreeNode(5);
    
    myclass.ConnectTreeNodes(pNode2, nullptr, pNode3);
    myclass.ConnectTreeNodes(pNode3, nullptr, pNode4);
    myclass.ConnectTreeNodes(pNode4, nullptr, pNode5);
    
    Test("Test12", pNode5, nullptr);
    Test("Test13", pNode4, pNode5);
    Test("Test14", pNode3, pNode4);
    Test("Test15", pNode2, pNode3);
    
    myclass.DestroyTree(pNode2);
}

void Test16()
{
    BinaryTreeNode* pNode5 = myclass.CreateBinaryTreeNode(5);
    
    Test("Test16", pNode5, nullptr);
    
    myclass.DestroyTree(pNode5);
}



int main(int argc, const char * argv[]) {
    // insert code here...
    Test1_7();
    Test8_11();
    Test12_15();
    Test16();
    return 0;
}
