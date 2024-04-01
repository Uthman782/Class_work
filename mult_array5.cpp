#include<iostream>
using namespace std;

int main(){
	 // arry[row][column]
	             //  0 1 2 3
	int arry[3][4]={{1,2,3,4}, // 0
					{2,3,4,5}, // 1 
					{3,4,5,6}};// 2
	cout<<"arry[0][2]: "<<arry[0][2]<<endl;
	arry[0][2] = 5;
	cout<<"arry[0][2]: "<<arry[0][2]<<endl;
	cout<<"arry[1][1]: "<<arry[1][1]<<endl;
	arry[1][1] = 6;
	cout<<"arry[0][2]: "<<arry[1][1]<<endl;
					
	return 0;
}

............OUTPUT............
arry[0][2]: 3
arry[0][2]: 5
arry[1][1]: 3
arry[1][1]: 6  

