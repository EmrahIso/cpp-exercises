#include <iostream>

int zapetljanost(int n) {
    int currentNum = n;
    int counter = 1;

    while(currentNum != 2) {
        for(int i = 1; i <= currentNum; i++) {
            if((currentNum % i) != 0) {
                currentNum = i;
                break;
            }
        }

        counter++;
    }

    return counter;
}

int main() {

    int a;
    int b;

    std::cin >> a >> b;

    int sum = 0;

    for(int i = a; i <= b; i++) {
        sum = sum + zapetljanost(i);
    }

    std::cout << sum << std::endl;

    return 0;
}