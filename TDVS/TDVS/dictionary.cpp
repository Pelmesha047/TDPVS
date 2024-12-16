
// dictionary.cpp
#include "dictionary.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iostream>

Dictionary::Dictionary(const std::string& language) {
    loadWords(language);
    std::srand(std::time(nullptr));
}

void Dictionary::loadWords(const std::string& language) {
    wordsByLength.resize(8); // ƒл€ слов длиной от 1 до 7
    for (int i = 1; i <= 7; ++i) {
        std::string filename = language + std::to_string(i) + ".txt";
        std::ifstream file(filename);
        if (!file) {
            std::cerr << "Cannot open file: " << filename << std::endl;
            continue;
        }
        std::string word;
        while (file >> word) {
            wordsByLength[i].push_back(word);
        }
    }
}

std::string Dictionary::getRandomWord(int maxLength) {
    if (maxLength < 1 || maxLength > 7 || wordsByLength[maxLength].empty()) return "";
    const auto& words = wordsByLength[maxLength];
    return words[std::rand() % words.size()];
}