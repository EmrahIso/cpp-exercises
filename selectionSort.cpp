#include <iostream>
#include <vector>

int main() {

    std::vector<int> array = {2, 7, 4, 1, 5, 3};
    
    for(int i = 0; i <= array.size() - 1; i++) {
        int smallest = i;
        for(int j = i + 1; j <= array.size() - 1; j++) {
            if(array[j] < array[smallest]) {
                smallest = j;
            }
        }
        int temp = array[smallest];
        array[smallest] = array[i];
        array[i] = temp;
    }

    for(int i = 0; i <= array.size() - 1; i++) {
        std::cout << array[i] << std::endl;
    }


    return 0;
}