//
//  namespace.cpp
//  c++learn2
//
//  Created by 劉子涵 on 2019/10/19.
//  Copyright © 2019 劉子涵. All rights reserved.
//

#include <iostream>

//每个名字都需要独立的using声明
using std::cin;
using std::endl;

int main(){
    
    int i=0;
    
    cin >> i; //正确 cin进行过using声明
    
    cout << i << endl;//错误，cout没有进行using声明
    
    std::cout << i << endl; //正确，为cout指定了std命名空间
    
    return 0;
}
