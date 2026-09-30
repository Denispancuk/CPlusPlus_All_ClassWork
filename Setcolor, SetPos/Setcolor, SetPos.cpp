#include <iostream>
#include <Windows.h>
using namespace std;
void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{
	Sleep(3000);
	system("slc");
    cout << "Hello World!\n";
}
