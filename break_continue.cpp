#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        
        if(i==2){
        
        // break;   //break use for exit from the loop by condition
        continue;   //continue use for escape the value 
        }
        cout << i << endl;
    }
    
    return 0;
}