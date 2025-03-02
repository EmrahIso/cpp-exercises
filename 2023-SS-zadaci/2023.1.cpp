#include <iostream>
#include <vector>

int main() {
    int n;
    int m;

    std::cin >> n >> m;

    std::vector<std::vector<int>> machines = {};

    for(int i = 1; i <= n; i++) {
        std::vector<int> timeVector = {};
        
        machines.push_back(timeVector);
    }
    
    for(int j = 0; j <= machines.size() - 1; j++) {
        for(int k = 1; k <= m; k++) {
            int time;
            std::cin >> time;

            machines[j].push_back(time);
        }
    }

    for(int i = 1; i <= m; i++) {
        int largest = 0;
        for(auto machine: machines) {
            if(machine[i - 1] > largest) {
                largest = machine[i - 1];
            }
        }

        std::cout << largest << " ";
    }

    return 0;
}