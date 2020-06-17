//
// Created by alkaidjiang on 2020/6/13.
//
#include <string>
#ifndef MYCPPPROJECT_SERVER_BASE_H
#define MYCPPPROJECT_SERVER_BASE_H
using namespace std;
class Response{
    //原有的基类
};

class HelloResponse: public Response{
    //基于pb文件自动生成
public:
    string ret_code;
};

class Request{
    //原有的基类
};

class HelloRequest: public Request{
    //基于pb文件自动生成
public:
    string data;
    string GetData(){
        return data;
    }
    void SetData(string data){
        this->data = data;
    }
};

class Context{
    //框架本身类，用于保存各种变量，以及提供日志写入渠道
};
#endif //MYCPPPROJECT_SERVER_BASE_H
