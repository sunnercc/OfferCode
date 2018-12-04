//
//  main.cpp
//  07面试题-重建二叉树
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 sunner. All rights reserved.
//



// 面试题7：重建二叉树
// 题目：输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输
// 入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,
// 2, 4, 7, 3, 5, 6, 8}和中序遍历序列{4, 7, 2, 1, 5, 3, 8, 6}，则重建出
// 图2.6所示的二叉树并输出它的头结点。

#include <iostream>
#include "MyClass.cpp"

void test(char* testName, int* preorder, int* inorder, int length);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    const int length = 8;
    int preorder[length] = {1, 2, 4, 7, 3, 5, 6, 8};  // 栈区
    int inorder[length] = {4, 7, 2, 1, 5, 3, 8, 6};
    
    test("test", preorder, inorder, length);
    
    return 0;
}

void test(char* testName, int* preorder, int* inorder, int length)
{
    if (testName != nullptr)
    {
        printf("%s begins:\n", testName);
    }
    
    printf("the preorder sequence is:");
    for (int i = 0; i < length; ++i)
    {
        printf("%d ", preorder[i]);
    }
    printf("\n");
    
    printf("The inorder sequence is: ");
    for(int i = 0; i < length; ++ i)
    {
        printf("%d ", inorder[i]);
    }
    printf("\n");
    
    try
    {
        MyClass myclass;
        BinaryTreeNode* root = myclass.Construct(preorder, inorder, length);
        myclass.PrintTree(root);
        myclass.DestroyTree(root);
    }
    catch(std::exception& exception)
    {
        printf("Invalid Input.\n");
    }
}
