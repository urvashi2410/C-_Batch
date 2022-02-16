// +, -, --, ++, < , > 
// c = a + b;
#include <iostream>
using namespace std;

class Complex{
    private:
        int a;
        int b;
    public:
        void setValue(int x, int y){
            a = x;
            b = y;
        }

        void display(){
            cout << a << " " << b;
        }

        // Complex operator +(Complex c){
        //     Complex temp;
        //     temp.a = a + c.a;
        //     temp.b = b + c.b;
        //     return temp;
        // }

        // Complex operator -(){
        //     Complex temp;
        //     temp.a = -a;
        //     temp.b = -b;
        //     return temp;
        // }
        
        // pre increment 
        Complex operator ++(){
            Complex temp;
            temp.a = ++a;
            temp.b = ++b;
            return temp;
        }

        // post increment 
        Complex operator ++(int){
            Complex temp;
            temp.a = a++;
            temp.b = b++;
            return temp;
        }

};

int main(){
    Complex c1;
    Complex c2, c3;

    c1.setValue(2, 8);
    // c2.setValue(5, 6);

    // primary operands = int, double, string 
    // c3 = c1+c2;
    // c3 = c1+c2;
    // c3.display();

    // c3 = -c1;
    // c3.display();

    // c3 = ++c1;
    // c3.display();

    c3 = c1++;
    c3.display();
}

// polymorphism = overloading 