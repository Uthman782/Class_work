#include<iostream>
using namespace std;

int main(){
//	cout<<"Hi";
	int arr[5][5] = {{2,4,3,4,5},
					 {4,2,5,4,3},
					 {6,5,2,7,8},
					 {9,6,2,1,8},
					 {8,7,3,3,7}};
	int *pa = &arr[0][0];
	for(int i=0;i<5;i++){
		cout<<"{";
		for(int j=0; j<5; j++){
			cout<<*pa++;
			if(j!=4)cout<<" ";
		}
		cout<<"}"<<endl;
	}
//	cout<<"SUM"<<endl;
//	pa = &arr[0][0];
//	for(int i=0;i<5;i++){
//		cout<<"{";
//		for(int j=0; j<5; j++){
//			cout<<(*pa) + (*pa++);
//			if(j!=4)cout<<" ";
//		}
		cout<<"}"<<endl;
	}
	return 0;
}