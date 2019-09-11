//
//  main.cpp
//  C++learn-1
//  一个简单的输入书籍信息的程序
//  练习使用外部头文件定义的简单类
//  Created by 劉子涵 on 2019/07/15.
//  Copyright © 2019 劉子涵. All rights reserved.
//

#include <iostream>
#include "Class.h"


int main() {
    Sales_item book;

    
    std::cin >> book.isbn >> book.sales_num >> book.price;
    std::cout << "isbn:" << book.isbn << "\nsalesnumber:" << book.sales_num << "\nprice:" << book.price << std::endl;
    
    
    return 0;
}
