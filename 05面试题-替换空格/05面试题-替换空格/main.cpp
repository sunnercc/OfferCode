//
//  main.cpp
//  05面试题-替换空格
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 sunner. All rights reserved.
//

#include <iostream>
#include "MyClass.cpp"

int main(int argc, const char * argv[]) {
    
    // 构造原数组
    char str[] = "hello world\0";
    for (int i = 0; *(str + i) != '\0'; i++) {
        std::cout << * (str + i) << std::endl;
    }
    
    MyClass myclass;
    myclass.replaceSpace(str, 20);
    for (int i = 0; *(str + i) != '\0'; i++) { // 打印到最后一个字符会crash ？
        std::cout << * (str + i) << std::endl;
    }
    return 0;
}
