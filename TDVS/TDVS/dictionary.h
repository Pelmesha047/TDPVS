// dictionary.h
#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <vector>
#include <string>

class Dictionary {
public:
    Dictionary(const std::string& language);
    std::string getRandomWord(int maxLength);

private:
    std::vector<std::vector<std::string>> wordsByLength; // Слова по длинам
    void loadWords(const std::string& language);
};

#endif