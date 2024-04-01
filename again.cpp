
#include<iostream>
using namespace std;

int main(){
	int a=1;
//	a=9/9%5 == a++;
//	a += a=2;
//	a = 2<<4;
//	a = 16>>2;
	int b = a++ * 2;
	cout<<b<<endl;
}
//int main(){
//	int a=1;
////	a=a+=a+=a+=a+=a+=a+=a+=a;
//	a+=a*=a*=a*=a*=a*=a*=a*=a;
//	 //  128  64  32 16  8  4  2  1
//	cout<<a;
//	return 0;
//}
//int main(){
// int i, j;
// j = 10;
// i = (j++, j, 999+j);
// cout << j;
// return 0;
// }
//int main(){
//	register int t = 255;
////	int a = t & 128;
////	cout<<(15 & 128);
//	if(200 & 32)cout<<"1";
////	XOR Operator..
////	if(1 ^ 1)
////		cout<<"1";
////	else
////		cout<<"0";
//	return 0;
//}

//Decimal to Binary...
//int main(){
//	int deci = 93, r;
//	static int count=1;
//	int bi[count];
//	for (int i=0; deci>0; i++){
//		r = deci%2;
//		deci/=2;
//		bi[i]= r;
//		count++;
//	}
//	for(int i=(count-2); i>=0; i--){
//		cout<<bi[i];
//	}
//	return 0;
//}

// Binary to Decimal.....
//int main(){
//	int bi=1011101;
//	int r, decimal=0, two=1;
//	for(int i=0; bi>0; i++){
//		r = bi%10;
//		if(r!=1 and r!=0){
//		cout<<"Not Binary.";
//		break;
//		}
//		bi = bi/10;
//		decimal+=r*two;
//		two*=2;
//	}
//	cout<<decimal;
//	return 0;
//}

//int main(){
//	int counter=1;
//	for(int i=0; i<=10; i++){
//		for(int j=0; j<=i; j++){
//			if(counter==11)break;
//			cout<<i<<" ";
//		}
//			counter++;
//		cout<<endl;
//	}
//	return 0;
//}


//int sum(int i){
//	static int sm = 0;
//	sm+=i;
//	return sm;
//}
//int func(){
//	static int count=0;
//	count++;
//	return count;
//}
//int main(){
//	int i;
//	for(int i=0; i<10; i++){
//		func();
//	}
//	int how_much=func();
//	cout<<how_much;
////	while(true){
////	cout<<"Enter Any value: ";
////	cin>>i;
////	int s = sum(i);
////	cout<<"Sum is: "<<s<<endl;
////	}
//	
//	return 0;
//}


// int r_avg(int i);
// int main(){
// int num;
// do {
// cout << "Enter numbers (-1 to quit): ";
// cin >> num;
// if(num != -1)
// cout << "Running average is: " << r_avg(num);
// cout << '\n';
// } while(num > -1);
// return 0;
//}
// // Compute a running average.
// int r_avg(int i)
// {
// static int sum=0, count=0;
// sum = sum + i;
// count++;
// return sum / count;
// }
//int main(){
//	for(char ch=65; ch<123; ch++){
//		if(ch==91)cout<<endl;
//		if(ch>90 and ch<97)continue;
//		
//		cout<<ch<<"  ";
//	}
//	return 0;
//}

//int main(){
//	char ch1=65, ch2=97;
//	for(; ch1<91; ch1++){
//		cout<<ch1<<ch2<<"  ";
//		ch2++;
//	}
//	return 0;
//}
//int main(){
//	int n=354, r, sum=0;
//	for(;n>0;){
//		r=n%10;
//		sum+=r; 
//		n=n/10;
//		cout<<r;
//	}
//	cout<<endl<<sum;
//	
//	return 0;
//}
//int main(){
//	int n/*=101*/,decimal=0, power=1, r;
//	cout<<"Enter only Binary (0 or 1) Number: ";
//	cin>>n;
//	for(int i=1;n>0;i++){
//		r=n%10;
//		n=n/10;
//		if(r>1)exit(0);
//		if(i>1)power*=2;
//		decimal+=r*power;
//	}
//	cout<<"Decimal: ";
//	cout<<decimal;
//	return 0;
//}