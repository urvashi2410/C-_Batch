// data persistence  

// ram = variables/arrays 

// file = hard disk 

// cin = input 
// cout = output  

// cin, cout 
// getch() 
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // to write in the file 
    // ofstream fout;
    // r = read mode 
    // w = write mode 
    // a = append mode 
    // by dedault w mode = delete whole while and write from the start 
    // fout.open("file.txt");
    // fout<<"python";
    // fout.close();

    // ifstream fin;
    // char c;
    // fin.open("file.txt");
    // // fin>>c;

    // while(!fin.eof()){
    //     fin>>c;
    //     cout<<c;
    // }

    // fin.close();

    // ofstream fout;
    // ifstream fin;
    // fout.open("file.txt", ios::binary);
    // fout.open("file.txt", ios::app | ios::binary | ios::in);
    // fin.open("file.txt", ios::binary);
    // char c;
    // while(!fin.eof()){
    //     fin>>c;
    //     cout<<c;
    // }
    // fout<<"open";
    // fout.close();

    // ifstream fin;

    // char c;
    // fin.open("file.txt");
    // int pos;
    // pos = fin.tellg();
    // cout << pos << endl;
    // fin>>c;
    // pos = fin.tellg();
    // cout << pos << endl;
    // fin>>c;
    // pos = fin.tellg();
    // cout << pos;

    // ofstream fout;
    // char c;

    // fout.open("file.txt", ios::app);
    // int pos;
    // pos = fout.tellp();
    // cout << pos;
    // fout<<"student";
    // pos = fout.tellp();
    // cout << pos;
    // fout.close();

    // ifstream fin;
    // fin.open("file.txt");
    // cout << fin.tellg() << endl;
    // // to get the char at that position 
    // cout << static_cast<char>(fin.get());
    // cout << static_cast<char>(fin.get());
    // cout << fin.tellg() << endl;

    // fin.seekg(2, ios_base::cur);
    // fin.seekg(-4, ios_base::end);
    // fin.seekg(5, ios_base::beg);

    // cout << static_cast<char>(fin.get());
    // cout << static_cast<char>(fin.get());
    // cout << static_cast<char>(fin.get());
    // cout << static_cast<char>(fin.get());
    // cout << static_cast<char>(fin.get());

    // seekp 
    return 0;
}