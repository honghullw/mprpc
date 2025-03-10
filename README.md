# mprpc rpc分布式网络通信框架

## 项目介绍

该项目是在 Linux 环境下基于 muduo、Protobuf 和 Zookeeper 实现的一个轻量级 RPC 框架。可以把单体架构系统的本地方法调用，重构成基于 TCP 网络通信的 RPC 远程方法调用，实现同一台机器不同进程或者不同机器之间的服务调用



## 编译

```
./autobuild.sh
```



## 运行

```
# 在zookeeper的bin目录下执行
./zkServer.sh start
# 在项目的bin目录下执行打开rpc服务提供者
./provider -i test.conf
# 在项目的bin目录下执行打开rpc服务调用者
./consumer -i test.conf
```



## 目录结构

```
|--bin      存放可执行文件
|--build    cmake构建的中间文件
|--example  存放框架使用示例代码
|--lib      编译生成的动态库
|--src      项目源代码  存放框架代码
|--test     示例代码
|--autobuild.sh  一键编译
|--CMakeLists.txt  Cmake顶层目录配置文件
```
