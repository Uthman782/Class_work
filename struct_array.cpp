#include<iostream>
using namespace std;
struct student{
	int rno;
	string name;
	int marks;
	int avg;
};
int main(){
    student data[5];
    for(int i=0; i<5; i++){
    	cout<<"Enter student name: ";
//    	getline(cin, data[i].name);
		cin>>data[i].name;
    	cout<<"Enter student r.no: ";
    	cin>>data[i].rno;
    	cout<<"Enter student marks m/1100: ";
    	cin>>data[i].marks;
    	data[i].avg = data[i].marks/11;
//    	if(data[i].name=="exit")break;
	}
	system("cls");
	cout<<"R.No    Name"<<endl;
	for(int i=0; i<5; i++){
		cout<<" "<<data[i].rno<<"    "<<data[i].name<<endl;
	}
	
    return 0;
}