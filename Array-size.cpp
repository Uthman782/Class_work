#include <iostream>
using namespace std;

int main()
{
	float arry[10] = {1.3F, 2.5F, 3.2F, 4.1F, 5.6F, 6.8F, 7.4F, 8.7F, 9.5F, 0.9F};
	cout << "Size of this array is: " << sizeof(arry) / sizeof(int) << endl;

	for (int i = 0; i < sizeof(arry) / sizeof(int); i++)
	{					 // size of array is 40
		if (!i)			 //         and
			cout << "{"; // size of int is 4..

		cout << arry[i];
		if (i < sizeof(arry) / sizeof(int) - 1)
			cout << ", ";
		else
			cout << "}";
	}
	return 0;
}