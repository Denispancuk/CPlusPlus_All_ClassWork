#include <iostream>
#include <iomanip>
using namespace std;
void InitArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void ShowArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int** AddRowStart(int** arr, int &rows, int cols) {
    int** temp = new int*[rows + 1];
    temp[0] = new int[cols];
    for (int i = 0; i < cols; i++)
    {
        temp[0][i] = 1;
    }
    for (int i = 0; i < rows; i++)
    {
        temp[i+1] = arr[i];
    }
    rows++;
    delete[]arr;
    return temp;

}
int** DelRowStart(int** arr, int &rows, int cols) {
    int** temp = new int*[rows - 1];
    for (int i = 0; i < rows-1; i++)
    {
        temp[i] = arr[i + 1];
    }
    rows--;
    delete[]arr;
    return temp;

}
int** DelRowToPos(int** arr, int &rows, int cols, int pos) {
    int** temp = new int*[rows - 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = pos; i < rows-1; i++)
    {
        temp[i] = arr[i+1];
    }
    for (int i = 0; i < cols; i++)
    {
        temp[pos][i] = 1;
    }
    rows--;
    delete[]arr;
    return temp;

}
int** AddColToStart(int** arr, int rows, int& cols) {
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        temp[i] = temp[cols + 1];
    }
    for (int i = 0; i < rows; i++)
    {
        temp[i][0] = 2;
    }
    cols--;
    delete[]arr;
    return temp;
}
//int ** 
int main()
{
    int rows = 3;
    int cols = 4;
    cout << "Enter count rows: "; cin >> rows;
    cout << "Enter count cols: "; cin >> cols;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    InitArray(arr, rows, cols);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //First task
    arr = AddRowStart(arr, rows, cols);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //Second task
    arr = DelRowStart(arr, rows, cols);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //Third task
    int pos;
    cout << "Enter a position to delete: "; cin >> pos;
    arr = DelRowToPos(arr, rows, cols, pos);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    arr = AddColToStart(arr, rows, cols);
    ShowArray(arr, rows, cols);
    cout << "\n\n---------------------------------------------------------------\n\n";
    //Fourth task
    
}

