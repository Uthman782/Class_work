#include<iostream>
using namespace std;

int main(){
	cout<<"Enter Number of Rows: ";
	int n;cin>>n;
    cout<<"What do you want to print: ";
    string shape;cin>>shape;
    int c = 1;
        while (n >= c){ //for(int c=1; c<=n; c++)
            int a=n, b=0, d=1;
            while (a >= c){ //for(int a=n; a>=c; a--)
                cout<<"   ";
                a--;
				}
            while (b < c){ //for(int b=0; b<c; b++)
                cout<<shape<<"  ";
                b++;}
            while (d < b){	//for(int d=1; d<b; d++)
                cout<<shape<<"  ";
                d++;
			}
            cout<<endl;
            c += 1;
	}
return 0;
}