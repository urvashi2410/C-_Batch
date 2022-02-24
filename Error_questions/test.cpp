// #include <iostream>
// using namespace std;

// class X{
//     private:
//     int i, j;
//     X(){
//         i = 1;
//         j = 1;
//     }

//     virtual void show()=0;
//     public:
//     void print(){
//         cout << i << " " << j ;
//     }
// };

// class Y: public X{
//     int k;
//     public:
//     void print(){
//         cout << k;
//     }
//     Y(){
//         i = j = k = 2;
//     }
// };

// int main(){
//     Y w;
//     w.print();
// }

#include <iostream>
using namespace std;

class du{
    private:
    public:
    void ~du(void){

    }
};
int main(){
    du d;
}