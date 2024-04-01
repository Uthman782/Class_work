#include<iostream>
using namespace std;

int main(){
//	int a=10;
////	int &p=a;
//	int *p = &a; 
//	cout<<(*p)++<<endl;
//	cout<<*p;

	int arr[5]={3,2,4,1,5};
	int *parr = &arr[0];
//	for(int i=0; i<5; i++){
//		cout<<"Enter value at address["<<i<<"]: ";
//		cin>>*parr++;
//	}
	parr = &arr[0];
	for(int i=0; i<5; i++){
		cout<<"arr["<<i<<"]: "<<*parr++<<endl;
	}
	for(int i=0; i<4; i++){
		for(int j=1; j<5; j++){
			if(*(parr-j)>*(parr)){
				int t = *(parr-j);
				*(parr-j) = *parr;
				*parr = t;
				
			}
//		}
//	}
	return 0;
}