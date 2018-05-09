// width.cpp -- using the width method
#include"iostream"

int main()
{
	using std::cout;
	int w = cout.width(30);
	cout.fill('*');
	cout << "default filed width =" << w << ":\n";
	cout.width(5);
	cout << "N*N" << ":\n";
	cout.width(8);
	cout << "N*N" << ":\n";

	for (long i = 1; i <= 100; i *=10)
	{
		cout.width(5);
		cout << i << ':';
		cout.width(8);
		cout << i*i << ":\n";
	}

	return 0;
}

