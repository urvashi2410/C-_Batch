#include <iostream>
using namespace std;

class A{
    public: 
        void f1(){
            cout << "A" << endl;
        }
        void f2(){
            cout << "F2 of A" << endl;
        }
};

class B : public A{
    public:
        // method overriding
        void f1(){
            cout << "b" << endl;
        }
        // method hiding 
        void f2(int a){
            cout << "F2 of B" << endl;
        }
};

int main(){
    B b;
    b.f1();
    // Early binding  = assigning function call at the compile time = compile time polymorphism
    b.f2();
}