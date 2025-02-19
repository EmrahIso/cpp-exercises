#include <iostream>
#include <string>

int main () {


    std::string word;

    std::cin >> word;

    std::string explosion;

    std::cin >> explosion;
    
    while(true) {
        if(word.length() <= 0) {
            std::cout << "FRULA" << std::endl;
            return 0;
        } else if(word.find(explosion) > 10000) {
            break;
        } else {
            word.erase(word.find(explosion), std::size(explosion));
        }
    }

    std::cout << word << std::endl;

    return 0;
}