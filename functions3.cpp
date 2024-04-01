#include <iostream>
using namespace std;

void print(char ch, int n){
    for (int i = 0; i < n; i++)
        cout << ch << " ";
    cout << endl;
}

int main(){
    char c;
    int a;
    char wan;
    while (true){
        cout << "Enter any Charactor: ";
        cin >> c;
        cout << "How many time do you want to print: ";
        cin >> a;
        print(c, a);
        cout << "Do you want again or not y/n: ";
        cin >> wan;
        if (wan == 'n' or wan == 'N')
            exit(0);
        else
            cout << "No problem, Do it again." << endl;
    }
    return 0;
}