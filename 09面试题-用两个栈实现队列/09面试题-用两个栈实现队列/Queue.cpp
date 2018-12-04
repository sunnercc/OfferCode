//
//  Queue.cpp
//  09面试题-用两个栈实现队列
//
//  Created by ifuwo on 2018/12/4.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <stdio.h>
#include <stack>
#include <exception>


// 面试题9：用两个栈实现队列
// 题目：用两个栈实现一个队列。队列的声明如下，请实现它的两个函数appendTail
// 和deleteHead，分别完成在队列尾部插入结点和在队列头部删除结点的功能。

using namespace std;

template <typename T>
class Queue {
    
public:
    
    Queue()
    {
        
    }
    
    ~ Queue()
    {
        while (stack1.size() > 0)
        {
            stack1.pop();
        }
        
        while (stack2.size() > 0)
        {
            stack2.pop();
        }
    }
    
    void push(const T& node)
    {
        stack1.push(node);
    }
    
    T pop()
    {
        if (stack2.size() <= 0)
        {
            while (stack1.size() > 0)
            {
                T& data = stack1.top();
                stack1.pop();
                stack2.push(data);
            }
        }
        
        if (stack2.size() == 0) {
            throw new exception();
        }
        
        T head = stack2.top();
        stack2.pop();
        
        return head;
    }
    
private:
    
    stack<T> stack1;
    stack<T> stack2;
};
