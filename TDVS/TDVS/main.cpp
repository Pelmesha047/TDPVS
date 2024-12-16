#include "trainer.h"
#include "config.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    std::string language;
    std::cout << "Select language (en/ru): ";
    std::cin >> language;
    std::cin.ignore(); // Пропустить оставшийся символ новой строки

    if (language != LANG_EN && language != LANG_RU) {
        std::cout << "Invalid language selected. Exiting." << std::endl;
        return 1;
    }

    Trainer trainer(language);
    trainer.start();
    return 0;
}