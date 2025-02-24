#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int findN(int n, std::vector<int> arr) {

    int startPoint = 0;
    int endPoint = arr.size() - 1;
    int middlePoint = round(((startPoint + endPoint) - 1) / 2);

    if(n == arr[middlePoint]) {
        return middlePoint;
    } else if(n > arr[middlePoint]) {
        std::vector<int> newVector;

        for(int i = middlePoint; i <= endPoint; i++) {
            newVector.push_back(arr[i]);
        } 

        return middlePoint + findN(n, newVector);
    } else if(n < arr[middlePoint]) {
        std::vector<int> newVector;

        for(int i = startPoint; i <= middlePoint; i++) {
            newVector.push_back(arr[i]);
        } 

        return middlePoint - findN(n, newVector);
    }

    return 0;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Index: " << findN(7, arr) << std::endl;

    return 0;
}