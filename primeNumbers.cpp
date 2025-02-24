#include <iostream>
#include <vector>

bool isPrime(int n) {

    for(int i = 2; i < n; i++) {
        if((n % i) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;

    std::cin >> n;

    std::vector<int> primeNumbers = {1};

    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            primeNumbers.push_back(i);
        }
    }

    std::cout << "Prime Numbers: " << std::endl;

    for(int j = 0; j <= primeNumbers.size() - 1; j++) {
        std::cout << primeNumbers[j] << std::endl;
    }

    return 0;
}