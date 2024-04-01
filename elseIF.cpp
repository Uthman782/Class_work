#include<iostream>
using namespace std;

int main(){
    float std_Per;  
    cout<<"Enter Student Percentage: ";
    cin>>std_Per;

    if(std_Per >= 80)cout<<"'A1' Grade."; 
    else if (std_Per>=70)cout<<"'A' Grade.";
    else if (std_Per>=60)cout<<"'B' Grade.";
    else if (std_Per>=50)cout<<"'C' Grade.";
    else if (std_Per>=40)cout<<"'D' Grade.";
    else if (std_Per>=34)cout<<"'E' Grade.";
    else cout<<"Student Fail !";        
	return 0;
}