#include<iostream>
using namespace std;
struct add{
	private:
		int x;
		int y;
	public:
	add(){
		x=y=0;
	}
	add(int a, int b){
		x=a;
		y=b;
	} 
	int sum(){
		return (x+y);
	}
	~add(){
		cout<<"\nObject is Destroy"<<endl;
	}
};
int main(){
	add ob(6, 7);
	cout<<ob.sum();
	return 0;
}