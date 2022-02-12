// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     // int a = 20;
//     // int *ptr;
//     // ptr = &a;

//     // cout << ptr << endl;

//     // cout << *ptr << endl;

//     // unary operators = ++ , --, ! 

//     // cout << a++ << endl;
//     // cout << a << endl;

//     // cout << *ptr++ << endl;

//     // cout << --a << endl;
//     // cout << a << endl;
//     // cout << a-- << endl;
//     // cout << a << endl;

//     // arithematic operators = + , - , * , / , % 

//     // if(a % 2 == 0){
//     //     cout << "even";
//     // }
//     // else{
//     //     cout << "odd";
//     // }

//     // if(*ptr % 2 == 0){
//     //     cout << "even" << endl;
//     // }
//     // else{
//     //     cout << "odd" << endl;
//     // }

//     // logical operators = && , !, || 
//     // relational operators = ==, <= 

//     int A[10] = {1, 3, 2, 5, 6, 7, 8};
//     // int *p;

//     // p = &A[9];

//     // cout << A << endl;
//     // 1 = 4 bytes = int 
//     // 1 address = 4 bytes 
//     // cout << A + 1 << endl;
//     // cout << *(A + 1) << endl;
//     // cout << A + 4 << endl;
//     // cout << *(A + 4) << endl;

//     // cout << ++(*(A+4)) << endl;

//     int (*ptr)[10]; 

//     // int arr[10]= { 1, 2, 3, 4, 6, 3, 6, 6, 9, 10};

//     // ptr = &arr;

//     // ++ptr;
//     // cout << ptr << endl;

//     // string s, *sp = 0;
//     // cout << s << endl << sp << endl;

//     // int *pi = 0;
//     // cout << pi << endl;

//     // char *p;
//     // int *c;

//     // cout << sizeof(p) << endl << sizeof(c) << endl;
//     // int a[] = {1, 4, 5};
//     // int *b[] = {&a[0], &a[1], &a[2]};

//     // *(arr + i) = arr[i] 
// }

#include <iostream>
    using namespace std;
    // void replace(char A[]){
    //     for(int i = 0; A[i] != '/0'; i++){
            
    //         if(A[i] == 'a' || A[i] == 'e' || A[i] == ){
    //             A[i] = "*";
    //         }
    //     }
    // }
    int main()
    {
        // string arr;
        char A[10] = "abcdefaai";
        char arr[20];
        int i;
        for(i = 0; i < 10; i++)
            *(arr + i) = 65 + i;
        *(arr + i) = '\0';
        cout << arr;
        return(0);
        

    }

    // '/0'
    char A[10] = "abcdefaai";
    for(int i = 0; A[i] != '/0'; i++){
        if()
    }