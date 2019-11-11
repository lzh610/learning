# tomcat相关教程汇总

## 概述
- 一般来说，一个网络应用，至少需要服务端和客户端两个部分，这里也可以理解为我们说的前端和后端。客户端主要是呈现在用户眼中的服务形式，用户可以在客户端通过互联网与服务端进行交互，而服务端最后方的数据库负责庞大数据的分类存储，而用户的在客户端的各种交互活动，由服务端的中间件来提供服务。同时中间件也有与数据库进行交互的接口，保证数据可以安全地进行更新备份。
- tomcat作为一个中间件，也需要其他的组件来进行支持。基本的架构比较标准也比较陈旧，Linux+tomcat+MySQL+Java（LTMJ），一个舍掉PHP，逐渐Java化的LAMP架构
- 当然，上述架构基本局限于服务端，至于客户端的话，利用最基本的html，或者jsp，还有各种前端框架，都可以和中间件进行接洽，实现交互。

## 需要用到的工具列表
- 操作系统层
    + 操作系统：Linux Ubuntu 18.04 LTS
    + 虚拟机或云服务器（作为操作系统的载体）:暂选用virtual box做虚拟机
- 网站开发架构
    + 后端数据库：MySQL
    + 中间件服务层：tomcat
    + 开发语言：Java
- 开发工具
    + 集成IDE：Intellj IDEA
    + window和linux交互的工具：winSCP

## 开发语言的学习
- 在开始tomcat的学习之前，一定要先好好看看Java
- 以下教程个人感觉最为实用
    + [廖雪峰Java教程](https://www.liaoxuefeng.com/wiki/1252599548343744)

## 作为服务器的虚拟机搭建
- virtual box的使用:[点击此链接安装virtual box](https://www.virtualbox.org/wiki/Downloads)
- 获取Ubuntu镜像：[Ubuntu镜像下载地址](https://ubuntu.com/download/desktop)
    + 注：考虑到初学者对Ubuntu不太熟悉，这里姑且先下载desktop版（有可视化界面），但是部署真正服务器的时候为了减少开销还是安装server（全部命令行）的比较好。
- virtual box安装Linux系统：[安装流程](https://blog.csdn.net/qq_37189082/article/details/79549209)

## 服务器中需要安装的各种基本服务
- MySQL：直接使用apt-get安装最为便捷。
- tomcat中间件：后面的链接里包含了tomcat及其相关的各种服务，包括jdk，MySQL等配置方法。[教程](https://blog.csdn.net/chijiandi/article/details/79244599)

## 开发机的配置
- 虽然我们的网络应用最重要部署到Linux系统的服务器下，但因为要保证服务器的性能，服务器中不应该安装跟项目本身无关的服务。尤其像集成IDE和数据库管理工具等带有可视化图形界面的应用，只在开发的时候对程序员有用，而在项目运行的过程中毫无用处。所以一般来说，这些东西我们要在本地配置安装。在本地进行开发和调试确认无误之后，再将项目部署到服务器上。
- 本地（以下均默认为window环境）tomcat配置：[教程](https://www.cnblogs.com/beginner-boy/p/7806680.html)
    + 上述教程默认jdk已经配置完毕
