#include <iostream>
using namespace std;

class A {
    public:
        A(){
            cout << "A constructor called" << endl;
        }
        ~A(){
            cout << "A destructor is called" << endl;
        }
};

class B: public A{
    public:
        B(){
            cout << "B constructor is called" << endl;
        }
        ~B(){
            cout << "B destructor is called" << endl;
        }
};

class C : public A{
    public:
        C(){
            cout << "C constructor called" << endl;
        }
        ~C(){
            cout << "C destructor called" << endl;
        }
};

int main(){
    // B b;
}