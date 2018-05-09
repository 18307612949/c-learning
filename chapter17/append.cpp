// append.cpp -- appending information to a file 
#include"iostream"
#include"fstream"
#include"string"
#include"cstdlib"

const char* file = "fileIoTest";
int main()
{
	using namespace std;
	char ch;
	string name;

// show initial information
	ifstream fin;
	fin.open(file);

	if(fin.is_open())
	{
		cout << "here are the current content of the " << file << " file\n";
		while(fin.get(ch))
		{
			cout << ch;
		}
		fin.close();
	}

// add new name
	ofstream fout(file,ios::out|ios::app);
	if(!fout.is_open())
	{
		cerr << "can't open " << file << " file for output.\n";
		exit(EXIT_FAILURE);
	}
	
	cout << "enter guest name (enter a blank line to quit):\n";
	
	while(getline(cin,name) && name.size() > 0)
	{
		fout << name <<endl;
	}
	fout.close();

// show reverse file
	fin.clear();
	fin.open(file);
	if(fin.is_open())
	{
		cout << "here are the new contents of the " << file << "file:\n";
		while(fin.get(ch))
		{
			cout << ch;		
		}
		fin.close();
	}
	cout << "done:\n";
	return 0;
}
