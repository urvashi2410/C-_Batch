#include <iostream>
using namespace std;

class Money{
    private:
        double a;
        double b;
        double d;
    public:
        void setValue(double x, double y, double z){
            a = x;
            b = y;
            d = z;
        }

        void display(){
            cout << a << " " << b;
        }

        Money operator +(Money c){
            Money temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }

        Money operator -(Money c){
            Money temp;
            if(a > c.a && b > c.b){
                temp.a = a - c.a;
                temp.b = b - c.b;
            }
            else if(a < c.a && b > c.b){
                temp.a = c.a - a;
                temp.b = b - c.b;
            }
            else if(a > c.a && b < c.b){
                temp.a = a - c.a;
                temp.b = c.b - b;
            }
            else{
                temp.a = c.a - a;
                temp.b = c.b - b;
            }
            return temp;
        }

        Money operator *=(int i){
            a = a*i;
            b = b*i;
            return *this;
        }

        Money operator /=(int i){
            a = a/i;
            b = b/i;
            return *this;
        }

        bool operator < (Money c){
            if(d < c.d){
                return true;
            }
            return false;
        }

};

int main(){
    Money m1, m2, m3;
    m1.setValue(4.5, 7.8, 5.6);
    m2.setValue(9.7, 0.9, 6.7);
    // m3 = m1 + m2;
    // m3.display();

    // m3 = m1 - m2;
    // m3.display();

    // m1 *= 3;
    // m1.display();

    // m1 /= 3;
    // m1.display();

    if(m1 < m2){
        cout << "m1 is smaller";
    }
    else {
        cout << "m1 is greater";
    }
}