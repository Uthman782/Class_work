#include<iostream>
using namespace std;

int main(){
	cout<<"Enter the Number for Loop Rows: ";
	int n;cin>>n;
	
	while(true){
    cout<<"What do you want to print: ";
    string shape;cin>>shape;
    int c = 1;
    if (shape == "exit()"){
        exit(0);
	}
    else{
        while (n >= c){
            int a = n;
            int b = 0;
            while (a >= c){
                cout<<"   ";
                a = a - 1;
				}
            while (b < c){
                cout<<shape<<"  ";
                b = b + 1;}
            int d = 1;
            while (d < b){
                cout<<shape<<"  ";
                d = d + 1;
			}
            cout<<endl;
            c = c + 1;
		}
	  }
	}
return 0;
}