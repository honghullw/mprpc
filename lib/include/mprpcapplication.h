//防止头文件被重复包含
#pragma once
#include "mprpcconfig.h"
#include "mprpcchannel.h"
#include "mprpccontroller.h"

//mprpc框架的基础类,负责框架的一些初始化操作
//单例设计模式
class MprpcAppliaction{
public:
    static void Init(int argc,char **argv);
    static MprpcAppliaction& GetInstance();
    static MprpcConfig& GetConfig();
private:
    static MprpcConfig m_config;
    MprpcAppliaction(){}
    MprpcAppliaction(const MprpcAppliaction&)=delete;
    MprpcAppliaction(MprpcAppliaction&&)=delete;
};