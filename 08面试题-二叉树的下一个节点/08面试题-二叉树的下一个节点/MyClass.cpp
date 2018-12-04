//
//  MyClass.cpp
//  08面试题-二叉树的下一个节点
//
//  Created by ifuwo on 2018/12/4.
//  Copyright © 2018 sunner. All rights reserved.
//

// 面试题8：二叉树的下一个结点
// 题目：给定一棵二叉树和其中的一个结点，如何找出中序遍历顺序的下一个结点？
// 树中的结点除了有两个分别指向左右子结点的指针以外，还有一个指向父结点的指针。

#include <stdio.h>

struct BinaryTreeNode {
    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
    BinaryTreeNode* m_pParent;
};

class MyClass {
    
    
public:
    
    BinaryTreeNode* CreateBinaryTreeNode(int value)
    {
        BinaryTreeNode* pNode = new BinaryTreeNode();
        pNode->m_nValue = value;
        pNode->m_pLeft = nullptr;
        pNode->m_pRight = nullptr;
        pNode->m_pParent = nullptr;
        
        return pNode;
    }
    
    void ConnectTreeNodes(BinaryTreeNode* pParent, BinaryTreeNode* pLeft, BinaryTreeNode* pRight)
    {
        if (pParent != nullptr)
        {
            pParent->m_pLeft = pLeft;
            pParent->m_pRight = pRight;
            
            if (pLeft != nullptr)
            {
                pLeft->m_pParent = pParent;
            }
            
            if (pRight != nullptr)
            {
                pRight->m_pParent = pParent;
            }
        }
    }
    
    void PrintTreeNode(BinaryTreeNode* pNode)
    {
        if (pNode != nullptr)
        {
            printf("value of this node is: %d\n", pNode->m_nValue);
            
            if (pNode->m_pLeft != nullptr)
            {
                printf("value of its left child is: %d.\n", pNode->m_pLeft->m_nValue);
            }
            else
            {
                printf("left child is null.\n");
            }
            
            if (pNode->m_pRight != nullptr)
            {
                printf("value of its right child is: %d.\n", pNode->m_pRight->m_nValue);
            }
            else
            {
                printf("right child is null.\n");
            }
        }
        else
        {
            printf("this node is null.\n");
        }
        
        printf("\n");
    }
    
    void PrintTree(BinaryTreeNode* pRoot)
    {
        PrintTreeNode(pRoot);
        
        if (pRoot->m_pLeft != nullptr)
        {
            PrintTreeNode(pRoot->m_pLeft);
        }
        
        if (pRoot->m_pRight != nullptr)
        {
            PrintTreeNode(pRoot->m_pRight);
        }
    }
    
    void DestroyTree(BinaryTreeNode* pRoot)
    {
        if (pRoot != nullptr)
        {
            BinaryTreeNode* pLeft = pRoot->m_pLeft;
            BinaryTreeNode* pRight = pRoot->m_pRight;
            
            delete pRoot;
            pRoot = nullptr;
            
            DestroyTree(pLeft);
            DestroyTree(pRight);
        }
    }
    
    BinaryTreeNode* GetNext(BinaryTreeNode* pNode)
    {
        if (pNode == nullptr)
        {
            return nullptr;
        }
        
        BinaryTreeNode* pNext = nullptr;
        if (pNode->m_pRight != nullptr)
        {
            BinaryTreeNode* pRight = pNode->m_pRight;
            while (pRight->m_pLeft != nullptr)
            {
                pRight = pRight->m_pLeft;
            }
            pNext = pRight;
        }
        else if (pNode->m_pParent != nullptr)
        {
            BinaryTreeNode* pCurrent = pNode;
            BinaryTreeNode* pParent = pNode->m_pParent;
            while (pParent != nullptr && pCurrent == pParent-> m_pRight)
            {
                pCurrent = pParent;
                pParent = pCurrent->m_pParent;
            }
            pNext = pParent;
        }
        
        return pNext;
    }
    
};
