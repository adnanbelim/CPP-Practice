#include<iostream>
using namespace std;

int main(){
    
    int math[3];

    math[0] = 12;
    math[1] = 22;
    math[2] = 32;

    int *p = math;

    cout << *p<<endl;
    cout << *(p+1)<<endl;
    cout << *(p+2)<<endl;
    
    return 0;
}