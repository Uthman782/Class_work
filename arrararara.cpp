#include<iostream>
using namespace std;

int func(int a){
	static int b=1;
	b++;
	cout<<b<<endl;
//	cout<<a;
}
int main(){
//	int arr[5] = {1,2,3,4,5};
//	int*ptr = arr;
//	cout<< *ptr;
//	ptr++;
//	cout<<*ptr;
//	int* ptr = nullptr;
//	cout<<ptr;
	int a =10;
	func(a);
//	cout<<a;
}
