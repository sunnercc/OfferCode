//
//  MyClass.cpp
//  05面试题-替换空格
//
//  Created by ifuwo on 2018/12/3.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <stdio.h>


class MyClass {
    
    
public:
    void replaceSpace(char* str, int length)
    {
        if (str == NULL)
        {
            return;
        }
        int spaces_count = 0;  // 空格数量
        int original_len = 0;  // 原始长度
        for (int i = 0; str[i] != '\0'; i++)
        {
            original_len ++;
            if (str[i] == ' ')
            {
                spaces_count ++;
            }
        }
        int len = original_len + spaces_count * 2;  // 替换之后的长度
        if (len + 1 > length)
        {
            return;
        }
        
        char* p1 = str + original_len;  // p1 指向原数组的末尾
        char* p2 = str + len;   // p2 指向替换之后的数组的末尾
        
        while (p1 < p2)
        {
            if (*p1 == ' ') {  // 指针取值
                *p2 = '0';
                p2--;
                *p2 = '2';
                p2--;
                *p2 = '%';
                p2--;
            }
            else
            {
                *p2 = *p1;
                p2--;
            }
            -- p1;
        }
    }
};
