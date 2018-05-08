// write.cpp -- using cout.write()
#include<iostream>
#include<cstring> //or else string.h

int main()
{
	using std::cout;
	using std::endl;
	const char* state1 = "florida";
	const char* state2 = "kansas";
	const char* state3 = "euphoria";
	int len = std::strlen(state2);

	cout << "increasing loop index:\n";
	int i;
	for ( i = 1; i <= len; i++)
	{
		cout.write(state2,i);
		cout << endl;
	}

// concatenate output
	cout << "decreasing loop index:\n";
	for ( i = len ; i >= 0 ; i-- )
	{
		cout.write(state2,i);
		cout << endl;
	}

	return 0;
}
