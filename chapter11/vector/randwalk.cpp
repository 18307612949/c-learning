// randwalk.cpp -- using the vector class
#include"iostream"
#include"vector.h"
#include"cstdlib"
#include"ctime"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	Vector step;
	double direction;
	unsigned long steps = 0;
	Vector result(0,0);
	double target;
	double dstep;
	cout << "Enter target distance (q to quit):";
	
	while(cin >> target)
	{
		cout << "Enter step length";
		if(!(cin >> dstep))
			break;
		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps ++;
		}
		cout << "after " << steps <<" steps,the subject"
			" has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << result << endl;
		cout << "average outward distance per step ="
			<< result.magval()/steps << endl;
		steps = 0;
		result.reset(0,0);
		cout << "enter the target distance (q to quit)";
	}
	cout <<"Bye!\n";
	cin.clear();
	while (cin.get() !='\n')
		continue;

	return 0;
}
