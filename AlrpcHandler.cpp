//
// Created by alkaidjiang on 2020/6/13.
//
#include <string>
#include "Server_Map.h"
#include "Server_Base.h"
using namespace std;

extern Response* AlrpcHandler(Request* Req, Context* context);

class Init{
public:
    Init(){
        function<Response*(Request*, Context*)> handler = AlrpcHandler;
        Register("Alrpc", handler);
    }
};

Init i = Init();

Response* AlrpcHandler(Request* Req, Context* context){
    //计划在这里编写相应的逻辑函数
    //Register("Alrpc", )
    HelloRequest *req =(HelloRequest*)(Req);
    HelloResponse *rsp = new HelloResponse();
    string data = req->GetData();
    if(data=="hello"){
        rsp->ret_code="1";
    }
    return rsp;
}
