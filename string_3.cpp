#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
	      //    0123456789....
    string str="Welcome to GDC";
    char x[55];
    cout<<"str is: "<<str<<endl;
    str.copy(x, -1, 10); //from_copy_variable.copy(to_copy_variable, end, start);
    cout<<"Copied string: "<<x;
return 0;
}