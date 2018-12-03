//
//  MyClass.cpp
//  06面试题-从头到尾打印链表
//
//  Created by ifuwo on 2018/12/3.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <stack>

struct ListNode {
    ListNode* m_pNext;
    int m_nValue;
};

class MyClass {
    
public:
    
    ListNode* CreateListNode(int value)
    {
        ListNode* pNode = new ListNode();
        pNode->m_nValue = value;
        pNode->m_pNext = nullptr;
        
        return pNode;
    }
    
    void ConnectListNodes(ListNode* pCurrent, ListNode* pNext)
    {
        if (pCurrent == nullptr) {
            printf("error to connect two nodes.\n");
            return;
        }
        
        pCurrent->m_pNext = pNext;
    }
    
    void PrintListNode(ListNode* pNode)
    {
        if (pNode == nullptr)
        {
            printf("the node is nullptr\n");
        }
        else
        {
            printf("the key in node is %d.\n", pNode->m_nValue);
        }
    }
    
    void PrintList(ListNode* pHead)
    {
        printf("print list starts.\n");
        ListNode* pNode = pHead;
        while (pNode != nullptr)
        {
            printf("%d\t", pNode->m_nValue);
            pNode= pNode->m_pNext;
        }
        printf("print list ends.\n");
    }
    
    void DestroyList(ListNode* pHead)
    {
        ListNode* pNode = pHead;
        while (pNode != nullptr)
        {
            pHead = pHead->m_pNext;
            delete pNode;
            pNode = pHead;
        }
    }
    
    void AddToTail(ListNode* pHead, int value)
    {
        ListNode* pNew = new ListNode();
        pNew->m_nValue = value;
        pNew->m_pNext = nullptr;
        
        if (pHead == nullptr)
        {
            pHead = pNew;
        }
        else
        {
            ListNode* pNode = pHead;
            while (pNode->m_pNext != nullptr)
            {
                pNode = pNode->m_pNext;
            }
            pNode->m_pNext = pNew;
        }
    }
    
    void RemoveNode(ListNode* pHead, int value)
    {
        if (pHead == nullptr)
        {
            return;
        }
        
        ListNode* pToBeDeleted = nullptr;
        if (pHead->m_nValue == value) {
            pToBeDeleted = pHead;
            pHead = pHead->m_pNext;
        }
        else
        {
            ListNode* pNode = pHead;
            while (pNode->m_pNext != nullptr && pNode->m_pNext->m_nValue != value)
            {
                pNode = pNode->m_pNext;
            }
            
            if (pNode->m_pNext != nullptr && pNode->m_pNext->m_nValue == value)
            {
                pToBeDeleted = pNode->m_pNext;
                pNode->m_pNext = pNode->m_pNext->m_pNext;
            }
        }
        if (pToBeDeleted != nullptr) {
            delete pToBeDeleted;
            pToBeDeleted = nullptr;
        }
    }
    
    // 从尾到头反过来打印出每个结点的值
    void PrintListReversingly_Iteratively(ListNode* phead)
    {
        std::stack<ListNode *> nodes;
        
        ListNode* pNode = phead;
        while (pNode != nullptr)
        {
            nodes.push(pNode);
            pNode = pNode->m_pNext;
        }
        while (!nodes.empty())
        {
            pNode = nodes.top();
            printf("%d\t", pNode->m_nValue);
            nodes.pop();
        }
    }
    
    // 从尾到头反过来打印出每个结点的值
    void PrintListReversingly_Recursively(ListNode* pHead)
    {
        if (pHead != nullptr)
        {
            if (pHead->m_pNext != nullptr)
            {
                PrintListReversingly_Recursively(pHead->m_pNext);
            }
            
            printf("%d\t", pHead->m_nValue);
        }
    }
};
