#include <iostream>
using namespace std;

class Test{
    private:
        string *name;
        int *marks;

    public:
        Test(){
            cout << "constructor called" << endl;
        }

        Test(string iname, int imarks){
            name = new string;
            marks = new int;

            *name = iname;
            *marks = imarks;
        }

        ~Test(){
            delete name;
            delete marks;
            cout << "Destructor called";
        }


        // void display(){
        //     cout << "name is " << *name << "and marks is " << *marks << endl;
        // }
};

int main(){
    Test t;
    // t.display();
    // Test *t = new Test();
    // delete t;
}