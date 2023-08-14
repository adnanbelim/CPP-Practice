#include <iostream>
using namespace std;

int main()
{

    int a = 3;
    int *b = &a;

    // (&) is a address_of operator.

    cout << "The address of a is " << b << endl;
    cout << "The address of a is " << &a << endl;

    // (*) is a value_at operator.

    cout << "the value of a is : " << a << endl;
    cout << "the value of a is : " << *b << endl;

    // pointer to pointer

    int **c = &b;

    cout << "The address of b is " << c << endl;
    cout << "the value of b is : " << **c << endl;

    return 0;
}