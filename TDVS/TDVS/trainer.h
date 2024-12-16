// trainer.h
#ifndef TRAINER_H
#define TRAINER_H

#include <string>
#include <vector>
#include "dictionary.h"

class Trainer {
public:
    Trainer(const std::string& language);
    void start();

private:
    Dictionary dictionary;
    std::string currentLine;
    int duplicateCount;

    void generateLine();
    void analyzeInput(const std::string& userInput);
    void doubleErrors(std::string& word, const std::string& userInput);
    int calculateLineLength(const std::string& line);
};

#endif