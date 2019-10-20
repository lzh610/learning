//
//  string_for_cctype.cpp
//  c++learn2
//
//  Created by 劉子涵 on 2019/10/20.
//  Copyright © 2019 劉子涵. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cctype>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;

int main(int argc ,char *args[]){
    //实现功能，统计一句话里有多少个标点符号
    int punct_count = 0;
    string s;
    getline(cin, s);
    for (auto c:s){
        if(ispunct(c))
            ++punct_count;
    }
    cout << "string:" << s << endl;
    cout << "punct number:" << punct_count <<endl;
    
    return 0;
}
