#include <iostream>
using namespace std;

class A {
    public:
        void f1(){

        }
        virtual void f2(){

        }
        virtual void f3(){

        }
        virtual void f4(){

        }
};

class B : public A{
    public: 
        // overriding 
        void f1(){

        }

        void f2(){

        }

        void f4(int a){

        }
};

int main(){
    A a;
    cout << sizeof(a)<< endl;
    B b;
    cout << sizeof(b) << endl;

    A *p, o;
    B b;
    p = &b;

    p->f1(); // Early binding // A 
    p->f2(); // Late binding // B
    p->f3(); // Late binding // A
    p->f4(); // Late binding // A
    // p->f4(6); // Early binding // A = error = no same type of function having same parameters 
    return 0;
}