#include<iostream.h>
#include<conio.h>
#include<string.h>


int c = 45;

void main(){
int a, b, c;

clrscr();

cout << "enter the value of number"; //insertion operator

cout << "enter value of number 1\n";
cin >> a; //extractipon operator
cout << "enter value of number 2\n";
cin >> b;

c = a+b;

cout << "sum is : " << c << endl;  //endl use as typeof
//cout << "globel var is : "<<::<<c;    //scope resolution operator ::

getch();
}
