//usetime2.cpp -- using the Time2 class
#include"iostream"
#include"mytime2.h"

int main()
{
	using std::cout;
	using std::endl;

	Time weeding(2,55);
	Time waxing(1,45);
	Time total;
	Time diff;
	Time adjust;

	cout << "weeding time =";
		weeding.Show();
	cout << endl;

	cout << "waxing time =";
		waxing.Show();
	cout << endl;

	total = weeding + waxing;
	cout << "total time =";
		total.Show();
	cout << endl;

	diff = weeding - waxing;
	cout << "diff time =";
		diff.Show();
	cout << endl;

	adjust = total * 1.5;
	cout << "adjust time =";
		adjust.Show();
	cout << endl;

	return 0;
}
