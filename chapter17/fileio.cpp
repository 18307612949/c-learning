// fileio.cpp -- saving to a file
# include "iostream"
# include "fstream"
# include "string"

int main ()
{ 
	using namespace std;
	string filename;
	float secreatNumber;
	cout << "enter yours file name :";
	cin >> filename;

	ofstream fout (filename.c_str());
	cout << "for your eye only\n";
	cin >> secreatNumber;
	fout << "your secreatNumber is:" << secreatNumber << endl;
	fout.close();

	return 0;
}
