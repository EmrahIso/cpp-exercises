#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> heightV = {};

    for(int i = 1; i <= n; i++) {
        int h;
        std::cin >> h;

        heightV.push_back(h);
    }

    int largest = 0;
    int secondLargest = 0;

    for(int i = 0; i < heightV.size() - 1; i++) {
        int difference;

        if(heightV[i] < heightV[i + 1]) {
            difference = heightV[i + 1] - heightV[i];
        } else {
            difference = 0;
        }

        if(difference > largest) {
            secondLargest = largest;
            largest = difference;
        } else if (difference > secondLargest) {
            secondLargest = difference;
        }
    }

    std::cout << secondLargest << std::endl;

    return 0;
}