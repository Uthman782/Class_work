#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ // Two String Concatenation 
    char fname[20], lname[20];
    cout << "first Name: ";
    gets(fname);
    cout << "Last Name: ";
    gets(lname);
    strcat(fname, lname);
    puts(fname);
    
    return 0;
}