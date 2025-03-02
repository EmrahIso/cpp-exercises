#include <iostream>
#include <string>

int main() {
    int length;

    std::cin >> length;

    int arrayOfCurrentPositions[200]; 

    
    for (int i = 0; i < length; i++) {
        std::string wholeInput;

        std::getline(std::cin >> std::ws, wholeInput);

        char firstChar = (char) wholeInput[0];
        char secondChar = (char) wholeInput[2];

        if(arrayOfCurrentPositions[(int) firstChar] != 0 && arrayOfCurrentPositions[(int) secondChar] != 0) {
            char temp = arrayOfCurrentPositions[(int) firstChar];
            arrayOfCurrentPositions[(int) firstChar] = arrayOfCurrentPositions[(int) secondChar];
            arrayOfCurrentPositions[(int) secondChar] = temp;
        } else if(arrayOfCurrentPositions[(int) firstChar] != 0) {
            arrayOfCurrentPositions[(int) secondChar] = arrayOfCurrentPositions[(int) firstChar];
            arrayOfCurrentPositions[(int) firstChar] = secondChar;
        } else if(arrayOfCurrentPositions[(int) secondChar] != 0) {
            arrayOfCurrentPositions[(int) firstChar] = arrayOfCurrentPositions[(int) secondChar];
            arrayOfCurrentPositions[(int) secondChar] = firstChar;
        } else {
            arrayOfCurrentPositions[(int) firstChar] = secondChar;
            arrayOfCurrentPositions[(int) secondChar] = firstChar; 
        }
    }

    std::string word;

    std::cin >> word;

    std::string finalWord = "";

    for(int i = 0; i < std::size(word); i++) {
        if(arrayOfCurrentPositions[(int) word.at(i)] != 0) {
            finalWord.append(std::string {(char) arrayOfCurrentPositions[(int) word.at(i)]});
        } else {
            finalWord.append(std::string {(char) word.at(i)});
        }
    }

    std::cout << finalWord << std::endl;

    return 0; 
}

// Ubuduce umjesto std::size(std::string) koristiti std::string.length()