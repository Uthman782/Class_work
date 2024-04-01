#include<iostream>
using namespace std;
union std_union{
	float per;
	float gpa;
	char Grade;
};
struct student{
	int rno;
	int marks;
	std_union pgg;
}obj[3];

int main(){
	for(int i=0; i<3; i++){
		cout<<"Enter Student Roll No: ";
		cin>>obj[i].rno;
		cout<<"Enter Student Marks (600): ";
		cin>>obj[i].marks;
		if(obj[i].marks>600 or obj[i].marks<1){
			cout<<"Invalid Marks Entery. try again once\n";
			cout<<"Enter Student Marks (600): ";
			cin>>obj[i].marks;
			if(obj[i].marks>600 or obj[i].marks<1){
				cout<<"You again enter wrong marks.";
				exit(0);
			}
		}
		obj[i].pgg.per = obj[i].marks/6;     // total_marks/6
		obj[i].pgg.gpa = obj[i].marks/127.5;     // 6 x 21.25 = 127.5
		if(obj[i].marks>=500 and obj[i].marks<600)
			obj[1].pgg.Grade = 'A';
	}
//	Showing results...............
		cout<<"R No   marks   Grade"<<endl;
	for(int i=0; i<3; i++)
		cout<<obj[i].rno<<"      "<<obj[i].marks<<"      "<<obj[i].pgg.gpa<<endl;
	return 0;
}