#include <iostream>
using namespace std;

class A{
    public:
        virtual void f1(){

        };
        void f2(){
            
        }
};

class B : public A{
    public: 
        void f1(){

        }
        void f2(){

        }
};

int main(){
    A *p, o;
    B b;
    p = &b;
    // o.f1();
    p->f1();
    b.f1();

    // Early binding
    // late binding = runtime polymorphism  
}