#include<iostream>
using namespace std;

struct name1{
	string name;
	char fav_c;
};
struct name2{
	string name;
	char fav_color;
};
void setStruct(name1 *s1){
	s1->fav_c = 'O';
	s1->name = "Omy";
}
int main(){
	name1 s1 = {"Usman", 'U'};
//	cout<<s1.fav_c<<endl;
//	name1 s2 = {"Asad", 'A'};
////	s2 = s1;
//	cout<<s2.name<<endl;
	cout<<"Name: "<<s1.name<<" Fav-Color: "<<s1.fav_c<<endl;
	setStruct(&s1);
	cout<<"Name: "<<s1.name<<" Fav-Color: "<<s1.fav_c<<endl;
	return 0;
}