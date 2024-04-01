#include<iostream>
using namespace std;

float pound_To_Kg(float pounds){
    float kg = pounds/2.205; // kg = pounds/x =>
                             // x= pounds/kg;
    return kg;              // x= 1/0.453592
}                           // x=2.205
int main(){
    float kg = pound_To_Kg(1); // 1 pounds = 0.45.... kg
    cout<<kg;         // OUTPUT 0.453515
return 0;
}