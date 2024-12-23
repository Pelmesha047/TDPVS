#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

string chooseLanguage() {
    int choose;
    cin >> choose;
    do {
        if (choose == 1) {
            return "english";
        }
        else if (choose == 2) {
            return "русский";
        }
        else {
            cout << "Ошибка! Введите корректное значение.";
        }
    } while (choose != 1 && choose != 2);
}


int main()
{
    setlocale(LC_ALL, "russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int l;
    cout << "Выберите язык:" << endl;
    cout << "1 - английский" << endl;
    cout << "2 - русский" << endl;
    cin >> l;
    cout << "Выбранный язык:" << ' ' << chooselanguage(l);
    /*if (chooselanguage(l) == "русский") {
        cout << "Выбранный язык:" << ' ' << chooselanguage(l);
    }
    

    if (chooselanguage(l) == "english") {
        cout << "Your language is" << ' ' << chooselanguage(l);
    }

    if (chooselanguage(l) != "english" && chooselanguage(l) != "русский") {
        cout << chooselanguage(l);
    }*/
  
        

    
    return 0;
}