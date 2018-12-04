//
//  main.cpp
//  09面试题-用两个栈实现队列
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <iostream>
#include "Queue.cpp"

void Test(char actual, char expected)
{
    if(actual == expected)
        printf("Test passed.\n");
    else
        printf("Test failed.\n");
}

int main(int argc, char* argv[])
{
    Queue<char> queue;
    
    queue.push('a');
    queue.push('b');
    queue.push('c');
    
    char head = queue.pop();
    Test(head, 'a');
    
    head = queue.pop();
    Test(head, 'b');
    
    queue.push('d');
    head = queue.pop();
    Test(head, 'c');
    
    queue.push('e');
    head = queue.pop();
    Test(head, 'd');
    
    head = queue.pop();
    Test(head, 'e');
    
    return 0;
}

