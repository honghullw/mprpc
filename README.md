# 基于C++实现的分布式 RPC 服务注册与调用系统

## 项目介绍
基于 C++实现了分布式环境下本地服务在 RPC 节点上的注册、发布与远程调用功能。项目实现了自定义通信协议、服务注册中心、日志系统及高并发网络模型，具备高性能和良好的扩展性。
具体来说该项目是在 Linux 环境下基于 muduo、Protobuf 和 Zookeeper 实现的一个轻量级 RPC 系统。可以把单体架构系统的本地方法调用，重构成基于 TCP 网络通信的 RPC 远程方法调用，实现同一台机器不同进程或者不同机器之间的服务调用



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
