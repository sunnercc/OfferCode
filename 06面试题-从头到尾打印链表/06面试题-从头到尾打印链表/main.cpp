//
//  main.cpp
//  06面试题-从头到尾打印链表
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <iostream>
#include "MyClass.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    MyClass myclass;
    ListNode* pNode1 = myclass.CreateListNode(1);
    ListNode* pNode2 = myclass.CreateListNode(2);
    ListNode* pNode3 = myclass.CreateListNode(3);
    ListNode* pNode4 = myclass.CreateListNode(4);
    ListNode* pNode5 = myclass.CreateListNode(5);
    
    myclass.ConnectListNodes(pNode1, pNode2);
    myclass.ConnectListNodes(pNode2, pNode3);
    myclass.ConnectListNodes(pNode3, pNode4);
    myclass.ConnectListNodes(pNode4, pNode5);
    
    myclass.AddToTail(pNode1, 10);
    myclass.PrintListReversingly_Iteratively(pNode1);
    printf("\n");
    
    myclass.RemoveNode(pNode1, 10);
    myclass.PrintListReversingly_Recursively(pNode1);
    
    return 0;
}
