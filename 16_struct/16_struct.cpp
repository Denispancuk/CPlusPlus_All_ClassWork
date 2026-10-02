#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
    char month_name[15];
};
struct Worker
{
    char name[20];
    char surname[20];
    char position[20];

    double salary;
    Date birthdate;
    Date hiredate;

};
Worker InputWorker(Worker &worker) {
    cout << "Enter name: "; cin >> worker.name;
    cout << "Enter surname: "; cin >> worker.surname;
    cout << "Enter posiiton: "; cin >> worker.position;
    cout << "Enter salary: "; cin >> worker.salary;

    cout << "Birthdate day: "; cin >> worker.birthdate.day;
    cout << "Birthdate month: "; cin >> worker.birthdate.month;
    cout << "Birthdate year: "; cin >> worker.birthdate.year;

    cout << "Hiredate day: "; cin >> worker.hiredate.day;
    cout << "Hiredate month: "; cin >> worker.hiredate.month;
    cout << "Hiredate year: "; cin >> worker.hiredate.year;
    return worker;
}
void ShowWorker(Worker &worker) {
    cout << "\nName: " << worker.name << endl;
    cout << "Surname: " << worker.surname << endl;
    cout << "Position: " << worker.position << endl;
    cout << "Salary: " << worker.salary << endl;
    cout << "Birthdate: " << worker.birthdate.day << "/" << worker.birthdate.month << "/"<< worker.birthdate.year << endl;
    cout << "Hiredate: " << worker.hiredate.day << "/" << worker.hiredate.month << "/"<< worker.hiredate.year << endl << endl;
}
int main()
{
    /*int number = 100;
    Date birthdate = { 25,12,2000,"December" };

    cout << "--------- my birthday -----------------" << endl;
    cout <<"Day: " << birthdate.day << endl;
    cout <<"month: " << birthdate.month << birthdate.month_name <<endl;
    cout <<"Year: " << birthdate.year <<endl;

    Date friend_birthday;
    cout << "Enter day: "; cin >> birthdate.day;
    cout << "Enter month: "; cin >> birthdate.month;
    cout << "Enter month name: "; cin >> birthdate.month_name;
    cout << "Enter Year: "; cin >> birthdate.year;*/
    Worker worker = { "oleg", "kozak", "manager",117000,{11,5,1999}, {2,2,2022} };
    ShowWorker(worker);

    Worker newWorker = {};
    newWorker = InputWorker(newWorker);
    ShowWorker(newWorker);

    Date event = { 26,10,2026, "October" };
    cout << event.day << endl;
    cout << event.month << endl;
    cout << event.year << endl;
    cout << event.month_name << endl;
    Date new_event;
    new_event = event;

    Date* ptr = nullptr;
    ptr = &event;
    cout << ptr->day;
    int a;
    char b;
    double c;
    int* p;
    cout << "sizeof int ---> " << sizeof(int) << endl;
    cout << "sizeof int ---> " << sizeof(a) << endl;
    cout << "sizeof int ---> " << sizeof(b) << endl;
    cout << "sizeof int ---> " << sizeof(c) << endl;
    cout << "sizeof int ---> " << sizeof(p ) << endl;
}
