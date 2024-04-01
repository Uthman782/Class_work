#include<iostream>
using namespace std;

int main()
{
	int cs, math, phy;
	cout << "Enter 'CS' Marks: ";
	cin >> cs;
	if (cs > 100)
	{
		cout << "Invalid Marks !";
		return 0;
	}
	else
	{
		cout << "----------> Continue..." << endl;
	}
	cout << "Enter 'Maths' Marks: ";
	cin >> math;
	if (math > 100)
	{
		cout << "Invalid Marks !";
		return 0;
	}
	else
	{
		cout << "----------> Continue..." << endl;
	}
	cout << "Enter 'Physics' Marks: ";
	cin >> phy;
	if (phy > 100)
	{
		cout << "Invalid Marks !";
		return 0;
	}
	else
	{
		cout << "----------> Continue..." << endl;
	}
	int total_marks = (cs + math + phy);
	int avg_of_marks = (total_marks / 3);

	cout << "Your Total 'Marks' is: " << total_marks << endl;
	cout << "Average  is  :" << avg_of_marks;
	return 0;
}