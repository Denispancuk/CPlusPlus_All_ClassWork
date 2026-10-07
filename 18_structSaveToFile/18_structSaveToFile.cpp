#include <iostream>
#include <fstream>
using namespace std;

struct Human {
private:
	char name[50];
	char surname[50];
	int age;
public:
	void Show() {
		cout << "Name: " << name << "\nSurname: " << surname << "\nage: " << age << endl;
	}
	void Fill() {
		cout << "Name: "; cin >> name;
		cout << "Surname: "; cin >> surname;
		cout << "Age: "; cin >> age;
	}
	void Copy(Human h) {
		strcpy_s(name, h.name);
		strcpy_s(surname, h.surname);
		age = h.age;

	}
	void SaveToFile() {
		ofstream out("tests.txt", ios_base::app);
		out << name;
		out << ":";
		out << surname;
		out << ":";
		out << age;
		out << "|";
		out.close();
	}
	void FillFromFile(char* nameF, char* surnameF, int ageF) {
		strcpy_s(name, nameF);
		strcpy_s(surname, surnameF);
		int age = ageF;
	}
};
int Menu() {
	int choice;
	cout << "1. Add person" << endl;
	cout << "2. Show all persons" << endl;
	cout << "3. Exit" << endl;
	cin.ignore();
	cin >> choice;
	return choice;
}
enum MENU{ ADD = 1, SHOW, EXIT};
void AddNewHuman(Human *& arr, int& size) {
	Human* temp = new Human[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i].Copy(arr[i]);
	}
	temp[size].Fill();
	delete[] arr;
	arr = temp;
	size++;
	arr[size - 1].SaveToFile();
}
void ShowPeople(Human* h, int size) {
	for (int i = 0; i < size; i++)
	{
		h[i].Show();
	}
}
void ReapFromFile(Human*& arr, int& size) {
	ifstream in("tests.txt", ios_base::in);
	char bname[250], bsurname[250], bage[250];
	while (!in.eof())
	{
		in.getline(bname, 250, ':');
		in.getline(bsurname, 250, '|');
		in.getline(bage, 250, '|');
		int age = atoi(bage);
		Human readHuman;
		readHuman.FillFromFile(bname, bsurname, age);
	}
}
int main()
{
	Human human = {};
	human.Fill();
	human.Show();
	int size = 0;
	Human* people = new Human[size];

	bool isExit = false;
	while (!isExit)
	{
		switch (Menu())
		{
		case ADD:
			AddNewHuman(people, size);
			break;
		case SHOW:
			ShowPeople(people, size);
			break;
		case EXIT:
			isExit = true;
			break;
		default:
			break;
		}
	}



	delete[] people;
	//ofstream out;

	//out.open("test.txt");
	////out.open("test.txt", ios_base::out);
	//ofstream out("test.txt", ios_base::app);
	//if (out.is_open())
	//{
	//	out << "Hello world" << endl;
	//	out << "Hello world" << endl;
	//	out << "Hello world" << endl;
	//	out << "Hello world" << endl;
	//}
	//

	//out.close();
	///*ifstream in;
	//in.open("test.txt", ios_base::in);*/
	//char buff[50];
	//ifstream in("test.txt", ios_base::binary);
	//if (in.is_open())
	//{
	//	while (!in.eof())
	//	{
	//		in.getline(buff, 50);
	//		cout << buff << endl;
	//	}
	//	
	//}
	//
}
