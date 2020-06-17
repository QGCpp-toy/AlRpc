//
// Created by alkaidjiang on 2020/5/31.
//
#include <iostream>

using namespace std;
class A{
};

class B: public A{
public:
    int a;
};

int main(){
    B* b = new B();
    b->a = 2;
    A* a1 = b;
    B* b2 =(B*)(a1);
    cout<<b2->a<<endl;
    return 0;
}
