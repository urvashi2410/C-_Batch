// try catch throw 

// try{
//     a/b;
// throw cout << "hdhadadhh";
// }

// catch(e){
//     dshdshdshh
// }

void fun(){
    throw 1;
}

#include <iostream>
using namespace std;

int main(){
    // cout << "Welcome " << endl;
    // try{
    //     throw 10;
    //     cout << "In try/n" << endl;
    // }
    // catch(int e){
    //     cout << "Exception is " << e << endl;
    // }
    // catch(double e){
    //     cout << "Exception is " << e << endl;
    // }

    // cout << "End of the program";

    // 
    
    // int i = 3;
    // cout << "Welcome " << endl;

    // try{
    //     if(i == 1){
    //         throw 1;
    //     }
    //     if(i == 2){
    //         throw "rain";
    //     }
    //     if(i == 3){
    //         throw 8.9;
    //     }
    // }
    // catch(...){
    //     cout << "Exception is "<< endl;
    // }
    // cout << "End of the program" << endl;

    int i = 3;
    cout << "Welcome " << endl;

    try{
        if(i == 1){
            fun();
        }
        cout << "In try" << endl;
    }
    catch(int e){
        cout << "Exception is "<< e << endl;
    }
    cout << "End of the program" << endl;
    return 0;
}