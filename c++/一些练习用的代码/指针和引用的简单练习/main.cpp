//
//  main.cpp
//  c++learn2
//
//  Created by 劉子涵 on 2019/09/12.
//  Copyright © 2019 劉子涵. All rights reserved.
//

#include <iostream>

int main(){
    
    //原变量ival赋值为12
    int ival = 12;
    
    //定义ival的引用r
    int &r = ival;
    
    //定义指向ival的指针p
    int *p = 0;
    p = &ival;
    
    //定义指向指针p的指针p1
    int **p1 = nullptr;
    p1 = &p;
    
    //定义指针p的引用r1
    int *&r1 = p;
    
    /*结果输出：
     1.所有变量的输出都指向ival的值，故都为12
     2.使用引用r的值时直接写入引用名r即可
     3.使用指针p指向地址中存储的值时需要输出*p
     4.多重指针p1需要指针指两次才能到ival的值，故使用**p1输出
     5.使用指针的引用时按照指针的指向来操作引用名即可，即*r1和*p的效果相同
     */
    std::cout << "ival:" << ival << " r:" << r << " p:" << *p << " p1:" << **p1 << " r1:" << *r1 << std::endl;
    
    
    return 0;
}
