#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   /* char word[] = { 'H','e','l','l','o','\0'};
	for (int i = 0; i < 5; i++)
	{
		cout << word[i];
	}
	char mystring[] = "string";
	cout << mystring << " has " << sizeof(mystring) << " characters" << endl;
	for (int i = 0; i < sizeof(mystring); i++)
	{
		cout << static_cast<int>(mystring[i]) << " ";
	}
	mystring[1] = 'p';
	cout << mystring << endl;
	char  name[15] = "max";
	cin.getline(name, 15);
	cout << "My name is " << name << endl;
	char text[] = "Pring this!";
	char copy[50];
	strcpy_s(copy, text);
	cout << text << endl;
	cout << copy << endl;

	cout << "sizeof: " << sizeof(copy) << endl;
	cout << "Strnlen: " << strnlen(copy,50) << endl;

	char arr[255] = "Returns the head of a list. ";
	cout << arr << endl;
	cout << "Enter any text: "; cin.getline(arr, 255);
	cout << arr << endl;
	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;

	cout << "Copy arrays: " << endl;
	char arr2[255];
	strcpy_s(arr2, arr);
	cout << "Copy: " << arr2 << endl;

	cout << "Add to array: " << endl;
	cout << arr << endl;
	strcat_s(arr, "..........");
	cout << arr << endl;
	cout << "Enter any text: "; cin >> arr2;
	strcat_s(arr, arr2);
	cout << arr << endl;*/

	char any_word[] = "White111";
	cout << any_word[0] << " " << isalnum(any_word[0]) << endl;
	cout << any_word[5] << " " << isalnum(any_word[5]) << endl;
	cout << endl;
	cout << any_word[0] << " " << isalpha(any_word[5]) << endl;
	cout << any_word[5] << " " << isalpha(any_word[0]) << endl;
	cout << endl;
	cout << any_word[0] << " " << isdigit(any_word[5]) << endl;
	cout << any_word[5] << " " << isdigit(any_word[0]) << endl;
	cout << endl;
	cout << any_word[0] << " " << isupper(any_word[5]) << endl;
	cout << any_word[5] << " " << isupper(any_word[0]) << endl;
	cout << endl;
	cout << any_word[0] << " " << islower(any_word[5]) << endl;
	cout << any_word[5] << " " << islower(any_word[0]) << endl;
	cout << endl;
	cout << any_word[0] << " " << tolower(any_word[5]) << endl;
	cout << any_word[5] << " " << tolower(any_word[0]) << endl;
	cout << endl;
	cout << any_word[0] << " " << toupper(any_word[5]) << endl;
	cout << any_word[5] << " " << toupper(any_word[0]) << endl;


	double x = -1, y = 2.7, z = 3.14;

	cout << setw(5) << x << endl;
	cout << setw(5) << y << endl;
	cout << setw(5) << z << endl;
}
