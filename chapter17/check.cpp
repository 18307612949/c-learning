// check.cpp -- checking for valid input
#include "iostream"

int main ()
{
	using namespace std;
	int input;
	int sum=0;

	cout << "enter the number:";
	while ( cin >> input )
	{
		sum += input ;
	}

	cout << "the last input number is" << input  << endl;
	cout << "sum =" << sum <<endl;

	return 0;
}
