// usetime0.cpp -- use the class of mytime0
#include"iostream"
#include"mytime0.h"

int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(3,40);
	Time fixing(6,45);
	Time total;

	cout << "planning time =";
		planning.Show();
	cout << endl;

	cout << "coding time =";
		coding.Show();
	cout << endl;

	cout << "fixing time =";
		fixing.Show();
	cout << endl;

	cout << "total time =";
	total = coding.Sum(fixing);
		total.Show();
	cout << endl;


	return 0;
}
