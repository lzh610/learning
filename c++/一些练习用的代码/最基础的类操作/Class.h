//
//  Class.h
//  C++learn-1
//
//  Created by 劉子涵 on 2019/09/11.
//  Copyright © 2019 劉子涵. All rights reserved.
//

#ifndef Class_h
#define Class_h
//引入string类型的头文件
#include <string>

//使用标准库空间中的string
using std::string;

//定义Sales_item类
class Sales_item {

//定义类中的成员（书籍编号isbn，卖出的数量sales_num，以及单价price）
//此次均定义在public内，外部可直接操作
public:
    string isbn;
    int sales_num;
    double price;
};

#endif /* Class_h */
