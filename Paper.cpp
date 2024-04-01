#include<iostream>
using namespace std;

//int main(){
//	int i=1;
//	    //1         0         1  0        1        3        3-1=2
//	cout<<i--<<" "<<i++<<" "<<i--<<" "<<++i<<" "<<i+2<<" "<<3-i<<endl;
//	int j=i++;
//	cout<<j++<<endl;
//	int k=j--;
//	cout<<k<<" "<<j;
//	return 0;
//}
//int main(){
//	int i=1; i++;
//	cout<<i<<endl;
//	for(;i<10-i;)i++;
//	cout<<i<<" "<<(i<<2);
//	return 0;
//}

int main(){
	string str;
	int i=1, k=1;
	str = (--i < k--)?"Absolutly Yes":"Absolutly Not";
	cout<<"Ans : "<<str<<endl<<i;

	return 0;
}