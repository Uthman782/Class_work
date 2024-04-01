#include<iostream>
using namespace std;
union carPrice{
	float PKR;
	float Euro;
	float Dollar;
};
struct car{
	string make;
	string color;
	int odometer;
	int doors;
	carPrice price;
}honda, toyota, BMW, nissan, GMC;
int main(){
//	Make......................
	honda.make = "Honda";
	toyota.make = "Toyota";
	BMW.make = "BMW";
	nissan.make = "Nissan";
	GMC.make = "GMC";
	//	Colors......................
	honda.color = "Red";
	toyota.color = "White";
	BMW.color = "Black";
	nissan.color = "White";
	GMC.color = "Black";
	//	Odometer.....................
	honda.odometer = 87899;
	toyota.odometer = 150043;
	BMW.odometer = 11179;
	nissan.odometer = 213095;
	GMC.odometer = 400193;
	//	Doors.....................
	honda.doors = 4;
	toyota.doors = 4;
	BMW.doors = 4;
	nissan.doors = 4;
	GMC.doors = 4;
	//	Price......................
	honda.price.PKR = 10000.00;
	toyota.price.Euro = 3000.00;
	BMW.price.Dollar = 4000.00;
	nissan.price.Dollar =3500.00;
	GMC.price.Euro =4500.00;
	//.................................
	cout<<"Make   color  Odometer   Doors  price"<<endl;
	cout<<honda.make<<"   "<< honda.color<<"       "<< honda.odometer<<"    "<< honda.doors<<"    "<< honda.price.PKR<<endl;
	cout<<toyota.make<<"  "<< toyota.color<<"    "<< toyota.odometer<<"    "<< toyota.doors<<"    "<< toyota.price.Euro<<endl;
	cout<<BMW.make<<"     "<< BMW.color<<"     "<< BMW.odometer<<"    "<< BMW.doors<<"    "<< BMW.price.Dollar<<endl;
	cout<<nissan.make<<"  "<< nissan.color<<"    "<< nissan.odometer<<"    "<< nissan.doors<<"    "<< nissan.price.Dollar<<endl;
	cout<<GMC.make<<"     "<<GMC.color<<"    "<<GMC.odometer<<"    "<<GMC.doors<<"    "<<GMC.price.Euro<<endl;
	return 0;
}