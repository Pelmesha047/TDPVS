// trainer.cpp
#include "trainer.h"
#include "config.h"
#include <iostream>
#include <algorithm>
#include <sstream>

Trainer::Trainer(const std::string& language) : dictionary(language), duplicateCount(INITIAL_DUPLICATE_COUNT) {
    generateLine();
}

void Trainer::generateLine() {
    currentLine.clear();
    int remainingLength = SCREEN_WIDTH;
    while (remainingLength > 0) {
        int maxLength = std::min(remainingLength, 7);
        std::string word = dictionary.getRandomWord(maxLength);
        if (word.empty()) break;
        if (!currentLine.empty()) {
            currentLine += " ";
            --remainingLength;
        }
        currentLine += word;
        remainingLength -= word.length();
    }
}

void Trainer::analyzeInput(const std::string& userInput) {
    std::istringstream inputStream(userInput);
    std::istringstream currentStream(currentLine);
    std::string inputWord, currentWord;
    std::string result;

    while (currentStream >> currentWord) {
        if (!(inputStream >> inputWord)) {
            doubleErrors(currentWord, "");
            result += currentWord + " ";
            continue;
        }

        if (currentWord == inputWord) {
            result += dictionary.getRandomWord(currentWord.length()) + " ";
        }
        else {
            doubleErrors(currentWord, inputWord);
            result += currentWord + " ";
        }
    }

    currentLine = result.empty() ? result : result.substr(0, result.size() - 1);
    if (userInput == currentLine) {
        currentLine = currentLine.substr(0, std::max(0, (int)currentLine.length() - 2));
    }
}

void Trainer::doubleErrors(std::string& word, const std::string& userInput) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (i >= userInput.length() || word[i] != userInput[i]) {
            word.insert(i, duplicateCount, word[i]);
            i += duplicateCount - 1;
        }
    }
}

int Trainer::calculateLineLength(const std::string& line) {
    int length = 0;
    for (char c : line) {
        if (c != ' ') {
            ++length;
        }
    }
    return length;
}

void Trainer::start() {
    while (true) {
        std::cout << "Current line: " << currentLine << std::endl;
        std::string userInput;
        std::getline(std::cin, userInput);

        if (userInput == EXIT_CODE) {
            std::cout << "Exiting program. Goodbye!" << std::endl;
            break;
        }

        analyzeInput(userInput);

        if (currentLine.empty()) {
            ++duplicateCount;
            std::cout << "Level up! Errors will now duplicate " << duplicateCount << " times!" << std::endl;
            generateLine();
        }
        else if (calculateLineLength(currentLine) > SCREEN_WIDTH) {
            std::cout << "Line too long. Restarting level!" << std::endl;
            generateLine();
        }
    }
}