#include<iostream>
using namespace std;


union emp{
    int id;
    char name;
    float percentage;
};

int main(){
  
    union emp adnan;
    union emp Ali;
    
    adnan.id = 01;
    Ali.id = 02;
    adnan.name = 'b';
    Ali.name = 'b';
    adnan.percentage = 88.40;
    Ali.percentage = 88.40;

    cout << adnan.id << endl;
    cout << adnan.name << endl;
    cout << adnan.percentage << endl;

     cout << Ali.id << endl;
    cout << Ali.name << endl;
    cout << Ali.percentage << endl;

    return 0;



}
