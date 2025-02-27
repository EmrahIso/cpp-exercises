#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int main() {
    int n;

    std::cin >> n;

    std::vector<int> array = {};
    std::vector<int> countArray = {};

    for(int i = 1; i <= n; i++) {
        int value;
        std::cin >> value;
            
        array.push_back(value);
    }

    std::sort(array.begin(), array.end());

    for(int i = 0; i < n; i++) {
        if(countArray.size() == 0) {
            countArray.push_back(1);
        } else if(array[i] == array[i - 1]) {
            int temp = countArray[countArray.size() - 1];
            countArray[countArray.size() - 1] = temp + 1;
            continue;
        } else {
            countArray.push_back(1);
        }
    }


    int arrayLength = array.size() - 1;
    int arrayPointer = 0;
    int arrayCounter = 0;

    int pointer = 0;

    while(true) {

        if(arrayLength == arrayPointer) break;
    
        if(arrayCounter == 0) {
            pointer = 0;
            arrayCounter++;
            arrayPointer++;

            continue;
        } else if(array[pointer] == array[arrayCounter]) {
            array.erase(array.begin() + arrayCounter);

            arrayPointer++;

            continue;
        } 

        arrayCounter++;
        arrayPointer++;
        pointer++;
    }

    array.erase(array.begin() + (array.size() - 1)); 

    for(int i = 0; i <= countArray.size() - 1; i++) {
        std::cout << array[i] << " " << countArray[i] << std::endl;
    }

    return 0;
}