// class = variables , functions/methods 

// objects 

// class sportsCar : public Car{
//     ..

//     ...
// }

// parent class 
// child class / derived class 

#include <iostream>
using namespace std;

class Car{
    private:
        int a;
    public:
        void set(){
            cout << "Hello";
        }
};

// public : private = private, protected = protected, public = public 
class Child : public Car{
    public:
        void get(){
            cout << "World";
        }
        
};

class Test : public Car{
    public: 
        void tes(){
            cout << "lion" << endl;
        }
};

// class third : public Child, public Car{
//     public:
//         void test(){
//             cout << "Third class";
//         }
// };

int main(){
    Child c;
    c.get();
    Test t;
    t.tes();
}

// avalaibilty / accessiblity 

// Types of inheritence:
// 1. single inheritence 
// 2. Multilevel inheritence 
// 3. Multiple inheritence 
// 4. hierarchical inheritence 

// visibility mode:
// private, public protected 

// public = same behavior of objects of child class as of the parent class 
// private = make every access specifier of the parent class private in the dervied class 
// protected = make every access specifier of the parent class protected in the dervied class 

// is a relationship 

// Association: 
// 1. Agrregation.
// 2. Inheritence. = is a relationship
// 3.

// Apple is a fruit 
// fruit = parent class = generalised 
// apple = child class 

// BMW is a car 

// publically inherit 