// dictionary.h
#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <vector>
#include <string>
#include <unordered_set>

class Dictionary {
public:
    Dictionary(const std::string& language);
    std::string getRandomWord(int maxLength, const std::unordered_set<std::string>& usedWords);

private:
    std::vector<std::vector<std::string>> wordsByLength; // Слова по длинам
    void loadWords(const std::string& language);
};

#endif