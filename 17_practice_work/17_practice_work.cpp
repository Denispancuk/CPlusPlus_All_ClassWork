#include <iostream>
#include <conio.h>
using namespace std;
struct Book
{
    int id;
    char name[50];
    char autor[50];
    char publishing_house[100];
    char genre[50];
    int year;
    float price;
};
void ShowBook(Book* arr, int size) {
        cout << "ID: " << arr->id << endl;
        cout << "Name book: " << arr->name << endl;
        cout << "Autor book: " << arr->autor << endl;
        cout << "Publishing house book: " << arr->publishing_house << endl;
        cout << "Genre book: " << arr->genre << endl;
        cout << "Year book: " << arr->year << endl;
        cout << "Price book: " << arr->price << endl << endl;
}
void ShowBooks(Book* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "ID: " << arr[i].id << endl;
        cout << "Name book: " << arr[i].name << endl;
        cout << "Autor book: " << arr[i].autor << endl;
        cout << "Publishing house book: " << arr[i].publishing_house << endl;
        cout << "Genre book: " << arr[i].genre << endl;
        cout << "Year book: " << arr[i].year << endl;
        cout << "Price book: " << arr[i].price << endl << endl;
    }     
}

void SearchBookByAutor(Book* arr , int size, char autor[]) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].autor, autor))
        {
            ShowBook(&arr[i], size);
        }
    }
}
void SearchBookByName(Book* arr , int size, char name[]) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].name, name))
        {
            ShowBook(&arr[i], size);
        }
    }
}
void SearchBookByHouse(Book* arr , int size, char publishing_house[]) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].publishing_house, publishing_house))
        {
            ShowBook(&arr[i], size);
        }
    }
}
void SearchBookByGenre(Book* arr , int size, char genre[]) {
    for (int i = 0; i < size; i++)
    {
        if (strcmp(arr[i].genre, genre))
        {
            ShowBook(&arr[i], size);
        }
    }
}
void ChangePrice(Book* arr, int size) {
    int id;
    float price;
    ShowBooks(arr, size);
    cout << endl;
    cout << "Enter id to change price: ";
    cin >> id;
    cout << "Enter new price: ";
    cin >> price;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].id == id)
        {
            arr[i].price == price;
        }
    }
}
int main()
{
    char name[50];
    const int size = 5;
    Book* arr = new Book[5]{
        {1,"Kobzar", "Taras Shevchenko", "Publishing House 1", "Poetry", 1840, 250.50},
        {2,"Tigrolovy", "Ivan Bagriany", "Publishing House 2", "Adventure", 1944, 180.00},
        {3,"Kaidasheva Simia", "Ivan Nechuy-Levytsky", "Publishing House 3", "Realism", 1878, 150.00},
        {4,"Zahar Berkut", "Ivan Franko", "Publishing House 4", "Historical novel", 1883, 195.40},
        {5,"Lisova Pisnia", "Lesya Ukrainka", "Publishing House 5", "Drama-extravaganza", 1911, 210.00}
    };
    int choice;
    do
    {
        system("cls");
        cout << "---------------------- Menu ----------------" << endl;
        cout << "Change book                             [1]" << endl;
        cout << "Print all books                         [2]" << endl;
        cout << "Search book by autor                    [3]" << endl;
        cout << "Search book by name                     [4]" << endl;
        cout << "Search book by publishing house         [5]" << endl;
        cout << "Search book by genre                    [6]" << endl;
        cout << "Change price book                       [7]" << endl;
        cout << "Add new book                            [8]" << endl;
        cout << "Delete book                             [9]" << endl;
        cout << "Exit                                    [0]" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Have a nice day! Goodbye!!!!" << endl;
            break;
        case 1:
            break;
        case 2:
            ShowBooks(arr, size);
            break;
        case 3:
            cout << "Enter name autor book: ";
            cin.getline(name, 50);
            SearchBookByAutor(arr, size, name);
            break;
        case 4:
            cout << "Enter name book: ";
            cin.getline(name, 50);
            SearchBookByName(arr, size, name);
            break;
        case 5:
            cout << "Enter book by publication house: ";
            cin.getline(name, 50);
            SearchBookByHouse(arr, size, name);
            break;
        case 6:
            cout << "Enter book by genre: ";
            cin.getline(name, 50);
            SearchBookByGenre(arr, size, name);
            break;
        case 7:
            ChangePrice(arr, size);
            break;

        default:
            cout << "Error choice" << endl;
            break;

        }
        if (choice != 0)
        {
            cout << "Press any key......" << endl;
            _getch();
        }


    } while (choice != 0);
}