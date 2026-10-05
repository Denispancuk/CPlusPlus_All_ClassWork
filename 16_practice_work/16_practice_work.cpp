#include <iostream>

using namespace std;

void printShape(char option) {
    int size = 11; // Розмір сітки 11x11, як у прикладі

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            bool draw = false;

            // Логічні умови для кожної фігури
            switch (option) {
            case 'a': case 'A': // а) Верхньо-лівий трикутник
                draw = (i + j <= size - 1);
                break;
            case 'b': case 'B': // б) Нижньо-лівий трикутник
                draw = (i >= j);
                break;
            case 'v': case 'V': // в) Верхній трикутник
                draw = (i <= j and i + j <= size - 1);
                break;
            case 'g': case 'G': // г) Нижній трикутник (код з вашого прикладу)
                draw = (i >= j and i + j >= size - 1);
                break;
            case 'd': case 'D': // д) Верхній та нижній трикутники
                draw = (i <= j and i + j <= size - 1) or (i >= j and i + j >= size - 1);
                break;
            case 'e': case 'E': // е) Лівий та правий трикутники
                draw = (i >= j and i + j <= size - 1) or (i <= j and i + j >= size - 1);
                break;
            case 'zh': case 'j': // ж) Лівий трикутник
                draw = (i >= j and i + j <= size - 1);
                break;
            case 'z': case 'Z': // з) Правий трикутник
                draw = (i <= j and i + j >= size - 1);
                break;
            case 'y': case 'Y': case 'i': // и) Верхньо-правий трикутник
                draw = (i <= j);
                break;
            case 'k': case 'K': // к) Нижньо-правий трикутник
                draw = (i + j >= size - 1);
                break;
            default:
                cout << "Невірний вибір!" << endl;
                return;
            }

            // Виведення елемента фігури або пробілу
            if (draw) {
                cout << "* "; // Замість |==| зазвичай використовують зірочки
            }
            else {
                cout << "  ";
            }
        }
        cout << endl; // Перехід на новий рядок
    }
}

int main() {
    setlocale(LC_ALL, "Ukrainian");

    char choice;
    do {
        cout << "\n=== МЕНЮ ФІГУР ===\n";
        cout << "a - Фігура а\n";
        cout << "b - Фігура б\n";
        cout << "v - Фігура в\n";
        cout << "g - Фігура г (з прикладу)\n";
        cout << "d - Фігура д\n";
        cout << "e - Фігура е\n";
        cout << "j - Фігура ж\n";
        cout << "z - Фігура з\n";
        cout << "i - Фігура и\n";
        cout << "k - Фігура к\n";
        cout << "0 - Вихід\n";
        cout << "Оберіть фігуру: ";
        cin >> choice;

        if (choice != '0') {
            cout << "\nРезультат:\n";
            printShape(choice);
        }
    } while (choice != '0');

    return 0;
}