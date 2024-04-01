#include<iostream>
using namespace std;
//	Addition, Subtraction, Multiplication and division..
int main(){
	int range;cout<<"Range: ";cin>>range; //Getting Range..
	int A[range], B[range];cout<<"For A !"<<endl;
	for(int i=0;i<range; i++){
		cout<<"A["<<i<<"]: ";cin>>A[i];
	}cout<<"For B !"<<endl;
	for(int i=0;i<range; i++){
		cout<<"B["<<i<<"]: ";cin>>B[i];
	}cout<<"  A:= { "; // Now printing Data..
	for(int i=0;i<range; i++)cout<<A[i]<<" ";
	cout<<"}"<<endl;
	cout<<"  B:= { ";
	for(int i=0;i<range; i++)cout<<B[i]<<" ";
	cout<<"}"<<endl;
	char op; //Getting operator from the user..
	cout<<"Enter Operator (+, -, * and /): ";cin>>op;
	switch(op){
		case '+':{ //if user enter +..
				cout<<"A+B:= { ";
				for(int i=0;i<range; i++)cout<<A[i] + B[i]<<" ";
					cout<<"}"<<endl;
			break;
		}
		case '-':{ //if user enter -..
				cout<<"A-B:= { ";
				for(int i=0;i<range; i++)cout<<A[i] - B[i]<<" ";
					cout<<"}"<<endl;
			break;
		}
		case '*':{ //if user enter *..
				cout<<"AxB:= { ";
				for(int i=0;i<range; i++)cout<<A[i] * B[i]<<" ";
					cout<<"}"<<endl;
			break;
		}
		case '/':{ //if user enter /..
				cout<<"A/B:= { ";
				for(int i=0;i<range; i++)cout<<A[i] / B[i]<<" ";
					cout<<"}"<<endl;
			break;
		}
		default:
			cout<<"Try! again. please enter only + - * /.";
	}
	return 0;
}