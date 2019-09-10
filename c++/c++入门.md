# c++入门

## 1.创建文件
- 一般都是.cpp后缀的文件，可以通过各种ide进行创建

## 2.编译文件

- 命令行
    - 一般使用GUN编译器，执行为：g++ -o [可执行文件名]  [cpp文件名].cpp

- 使用各种IDE自带的编译器
    - window平台下visual studio系列最常用
    - Linux和Mac使用Xcode最为便利

## 3.编写简单的c++程序

```
#include <iostream>

int main() {

    return 0;

}

```
- 一个c++工程中必须要有一个main函数，类型为int，返回值为0

## 4.输入和输出

### iostream库

- 分为istream和ostream两个类型的对象，分别进行输入和输出的操作
- 标准库定义的四个IO对象
    - cin：标准输入（istream类型）
    - cout：标准输出（ostream类型）
    - cerr：标准错误（专门用来输出错误信息）
    - clog：输出程序运行时的一般性信息（日志等）
    
### 一个包含IO对象的简单程序
```
#include <iostream>

int main() {

    std::cout << "Enter 2 numbers:" << std::endl;
    int n1 = 0;
    int n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "sum:" << n1 + n2 << std::endl;

    std::cerr << "cerr" << std::endl;

    std::clog << "clog" << std::endl;

    return 0;
}
```
- std：一个名为std的命名空间（namespace），标准库自带
- endl：操纵符（manipulator），结束当行，并将缓冲区的内容刷入数据流
- '>>'：输入运算符，一般与cin共同使用
- '<<'：输出运算符，一般与cout共同使用，在输出一般或错误信息时也可以使用（cerr和clog）
- ': :'：作用域运算符，表示命名空间的范围

## 5.注释
- 单行注释：//[一行代码]
- 块注释：/* [代码块] */

## 6.控制流
- 顺序
- 分支（if）
- 循环（while，for）

### 控制流示例程序
```
int main() {
    int sum = 0;
    int value = 0;
    while (std::cin >> value) {
        sum += value;
        if (sum > 100) {
            break;
        }
    }
    std::cout << "sum:" << sum << std::endl;
    return 0;
}
```
- 上述代码中while循环检测的是cin对象，如果cin对象的输出一直没有问题的话那么循环不会中断。故中间放置了停止条件

## 7.类简介
- 面向对象的一个重要标志  [面向对象的平民化说明](https://www.jianshu.com/p/7a5b0043b035)
- 使用类时需要关注的事情：
    - 类名
    - 定义此类的位置
    - 支持何种操作
