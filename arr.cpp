#include<iostream>
using namespace std;

int main(){

    // int arr[4] = {40,52,65,45};

    // cout<< "array value is" << arr[4];

    // array value can be change 

    int math[3];

    math[0] = 12;
    math[1] = 22;
    math[2] = 32;

    // cout << "before change\n";
    // cout << math[0]<<endl;  
    // cout << math[1]<<endl; 
    // cout << math[2]<<endl;

    // cout << "After change \n";

    // math[1] = 25;

    // cout << math[0]<<endl;  
    // cout << math[1]<<endl; 
    // cout << math[2]<<endl;
   
    for(int i = 0; i < 3; i++){
        cout << "The marks  of Index  value " << i << " is " << math[i] << endl;
    }


    return 0;
}