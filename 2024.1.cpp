#include <iostream>

int main () {
    int arrayLength;

    std::cin >> arrayLength;

    int array[arrayLength];

    for(int i = 0; i <= arrayLength - 1; i++) {
        std::cin >> array[i];
    }

    for(int i = 0; i <= arrayLength - 1; i++) {
        if((i + 1) % 2 == 0 && array[i] % 2 == 0) {
            continue;
        } else if((i + 1) % 2 != 0 && array[i] % 2 != 0) {
            continue;
        } else {
            std::cout << "Portal ostaje zatvoren" << std::endl;
            return 0;
        }
    }

    std::cout << "Portal se otvara" << std::endl;

    return 0;
}