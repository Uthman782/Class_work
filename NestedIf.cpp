#include<iostream>
using namespace std;

int main(){
    float studentPercentage;  
    cout<<"Enter Student Percentage: ";
    cin>>studentPercentage;
    
    if(studentPercentage>100 || studentPercentage<=0)
    	cout<<"Invalid Input";
    else if(studentPercentage >= 70){
    	if(studentPercentage>=90)
        	cout<<"Excellent."; 
        else if(studentPercentage>=85)
        	cout<<"Best."; 
        else if(studentPercentage>=80)
        	cout<<"Very Good.";
        else
        	cout<<"Good.";
	}
    else if (studentPercentage>=40)
        cout<<"Student 'PASS'.";
    else
        cout<<"Student 'Fail' !";        
return 0;
}