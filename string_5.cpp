#include<iostream>
#include<string>
using namespace std;

int main(){
    string str("Our GDC is very Good college for Programming.");
    string result = (str.find('GDC'))?"Yes found!":"Not Found!";
    cout<<result;
//	cout<<str.find(search);
return 0;
}