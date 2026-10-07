#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream out("test.txt", ios_base::out);
	if (out.is_open())
	{
		char base[250];
		cout << "Enter first line: ";
		cin.getline(base, 250);
		out << base << endl;
		cout << "Enter second line: ";
		cin.getline(base, 250);
		out << base << endl;
		cout << "Enter third line: ";
		cin.getline(base, 250);
		out << base << endl;
		cout << "Enter fourth line: ";
		cin.getline(base, 250);
		out << base << endl;
		cout << "Enter fiveth line: ";
		cin.getline(base, 250);
		out << base << endl;
		cout << "Save to file!!!" << endl;
		out.close();
	}
	else
	{
		cout << "File not exist" << endl;
	}
	cout << endl;
	char buff[250];
	ifstream in("test.txt", ios_base::in);
	if (in.is_open())
	{
		while (!in.eof())
		{
			in.getline(buff, 250);
			cout << buff << endl;
		}

	}
	else
		cout << "File not exist!" << endl;
	in.close();

}
