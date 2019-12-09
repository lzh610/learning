# java入门  #

## 1. 定义方式

java是面向对象的编程语言，基本单位为类`class`，定义方式如下：
```
public class Name { 

    // 定义内容

    // 可定义若干方法，例如

    public static void main(String[] args) { // 方法名是main
              
        // 真正执行的语句代码，例如

        System.out.println("Hello, world!");

    } // 方法定义结束

} // class定义结束
```

(1) 类名要求

- 必须以英文字母开头，后接字母，数字和下划线的组合
- 习惯以大写字母开头

(2) 方法要求

- 必须以英文字母开头，后接字母，数字和下划线的组合
- 习惯以小写字母开头
- 一个Java源码只能定义一个public类型的class
- Java入口程序规定的方法必须是静态方法，方法名必须为main，括号内的参数必须是String数组

(3) 语句代码

* 每一行语句以分号 `;` 结束
* 格式没有明确的要求，多几个空格或者回车不影响程序的正确性

## 2. 文件保存

class名称和文件名要完全一致,大小写敏感，例如`Name.java`

## 3. 文件编译与运行
* 命令行
    - 使用javac可以将.java源码编译成.class字节码

        在命令提示行中找到java保存的文件路径，输入`javac Name.java`,生成对应的class字节码即Name.class文件
    
    - 再执行`java Name`(无需输入.java后缀)可实现对java文件的执行
    - 命令行参数类型是String[]数组,命令行参数由JVM接收用户输入并传给main方法

* 各种IDE

## 4. 注释方式 
便于阅读，编译器自动忽略，主要注释方式分为三种：

* 单行注释 `//`

* 多行注释 以`/*`星号开头，以`*/`结束

* 特殊多行注释 以`/**`星号开头，以`*/`结束，每行以`*`开头

```
    // 单行注释...

    /*
    多行注释
    ...
    这也是注释
    */

    /**
     * 特殊多行注释
     * 需要写在类和方法的定义处，可以用于自动创建文档
     * 
     * @auther name
     */
```

## 5. 输入输出  ##

#### 输出 ####

* 普通输出
    - 结尾带回车 `System.out.println()`
    - 结尾不带回车 `System.out.print()`
* 格式化输出
    * 使用占位符，`System.out.printf("%?",name)`

        | 占位符 | 说明 |
        | ---- | ---- |
        | %d | 输出整数 |
        | %x | 输出十六进制整数 |
        | %f | 输出浮点数 |
        | %e | 输出科学计数法表示的浮点数 |
        | %s | 字符串 |

    * 例如
        ```
        System.out.printf("%.2f\n", d); // 显示两位小数3.14
        System.out.printf("n=%d, hex=%08x", n, n); // 格式化成十六进制，并用0补足8位
        ```

#### 输入 ####

* 导入包 `import java.util.Scanner;`
* 创建Scanner对象,传入System.in，`Scanner scanner = new Scanner(System.in);`
* 输入相应数据
    - 读取字符串使用`scanner.nextLine()`
    - 读取整数使用`scanner.nextInt()`
    - 
```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入上一次成绩：");
        int a = scanner.nextInt();
        System.out.println("请输入本次成绩：");
        int b = scanner.nextInt();
        float c = 0;
        c = (float)(b-a)/a*100;
        System.out.printf("%.2f%%",c);

    }
}
```