#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
    char str[55];
    cout<<"Enter Text: ";
    gets(str);
    char str1[55];
    str.copy(str1, 10, 0);
    cout<<str1;
return 0;
}