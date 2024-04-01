#include<iostream>
using namespace std;

inline int max(int a, int b, int c){ // An Inline Functions to find maximum
	int mx;
	mx = (a>b)? a: b;
	mx = (mx>c)? mx: c;
	return mx;
}
inline int min(int a, int b, int c){// An Inline Functions to find Minimum 
	int mn;
	mn = (a<b)? a: b;
	mn = (mn<c)? mn: c;
	return mn;
}
int main(){
	int a, b, c;
	cout<<"Enter Three Numbers: "<<endl;
	cin>>a>>b>>c;
	int greater = max(a,b,c);
	cout<<"Maximum Number("<<a<<", "<<b<<", "<<c<<"): "<<greater<<endl;
	int smaller = min(a,b,c);
	cout<<"Maximum Number("<<a<<", "<<b<<", "<<c<<"): "<<smaller;
	return 0;
}