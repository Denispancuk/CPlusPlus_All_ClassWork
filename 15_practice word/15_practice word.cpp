#include <iostream>
using namespace std;
void AorO(char any_word[]){
    int a = 0;
    int o = 0;
    for (int i = 0; i < strnlen(any_word, 255); i++)
    {
        if (any_word[i] == 'a' or any_word[i] == 'A') {
            a++;
        }
        if (any_word[i] == 'o' or any_word[i] == 'O') {
            o++;
        }
    }
    if (a > o) {
        cout << "letter \"a\" more than letter \"o\"" << endl;
    }
    else if (a < o) {
        cout << "letter \"o\" more than letter \"a\"" << endl;
    }
    else {
        cout << "letter count same" << endl;
    }
}
void countsletters(char any_word[]) {
    int digitCount = 0;
    int AlphaCount = 0;
    int WhitespacesCount = 0;
    for (int i = 0; i < strnlen(any_word, 255); i++) {
        if ((bool)isdigit(any_word[i]) == true)
        {
            digitCount++;
        }
        if ((bool)isalpha(any_word[i]) == true)
        {
            AlphaCount++;
        }
        if (any_word[i] == ' ')
        {
            WhitespacesCount++;
        }
    }
    cout << "Count digits: " << digitCount << endl;
    cout << "Count alphas: " << AlphaCount << endl;
    cout << "Count whitespaces: " << WhitespacesCount << endl;
}
void SmallBig_BigSmall(char any_word[]) {
    for (int i = 0; i < strnlen(any_word, 255); i++) {
        if ((bool)islower(any_word[i]) == true)
        {
            any_word[i] = toupper(any_word[i]);
        }
        else if ((bool)isupper(any_word[i]) == true)
        {
            any_word[i] = tolower(any_word[i]);
        }
    }
    cout << any_word << endl;
}
int main()
{
    char any_word[255] = "123";
    cout << "Enter any word[255 symbols]: ";
    cin.getline(any_word,255);
    //First task
    AorO(any_word);
    //Second task
    countsletters(any_word);
    //Third task
    SmallBig_BigSmall(any_word);
    
    
}
