//
// Created by alkaidjiang on 2020/6/13.
//

#ifndef MYCPPPROJECT_SERVER_MAP_H
#define MYCPPPROJECT_SERVER_MAP_H
#include <map>
#include <functional>
#include "Server_Base.h"

using namespace std;


map<string, function<Response*(Request*, Context*)>> CmdToFunc;

void Register(string CMD, function<Response*(Request*, Context*)> handler){
    CmdToFunc[CMD] = handler;
}
#endif //MYCPPPROJECT_SERVER_MAP_H
