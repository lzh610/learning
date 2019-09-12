//
//  main.cpp
//  c++learn2
//
//  Created by 劉子涵 on 2019/09/12.
//  Copyright © 2019 劉子涵. All rights reserved.
//

#include <iostream>
//定义全局变量reused
int reused = 111;

int main(int argc, const char * argv[]) {
    
    //定义局部变量unique
    int unique = 0;
    //在语句块内输出全局变量和局部变量的值，结果应为111 0
    std::cout << reused << " " << unique << std::endl;
    
    //定义与全局变量同名的局部变量，并赋值为0
    int reused = 0;
    //输出reused和unique的值，应为0 0
    std::cout << reused << " " << unique << std::endl;
    
    //改变作用域范围（这里::操作符前无作用域名称，表示向全局作用域发出请求获取操作符右侧名称对应的变量，也就是说获取上面定义的全局变量reused而非main函数的函数体中定义的reused变量），输出结果应为111 0
    std::cout << ::reused << " " << unique << std::endl;
    
    return 0;
}
