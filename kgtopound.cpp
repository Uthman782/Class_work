#include<iostream>
using namespace std;

float kg_to_pound(float kg){
    float x = 2.205;
    float pounds = kg*x;     // kg = pounds/x => = 1p = 0.453592
                             // pounds = kg*x;
    return pounds;           // x= 1/0.453592
}                           // x=2.205
int main(){
	int wkg = 55;
    float pounds = kg_to_pound(wkg); // 1 pounds = 0.45.... kg
    cout<<"Your Weigth: "<<wkg<<"kg\n convert into pounds: "<<endl;
	cout<<pounds<< " pounds" ;         // OUTPUT 0.453515
return 0;
}