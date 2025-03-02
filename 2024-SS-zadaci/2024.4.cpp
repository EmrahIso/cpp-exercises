#include <iostream>
#include <string>
#include <algorithm>

int main () {

    int numberOfCities; 
    int numberOfUniversityPairs;

    std::cin >> numberOfCities >> numberOfUniversityPairs;

    int cities[numberOfCities];

    for(int i = 1; i <= numberOfCities; i++) {
        cities[i - 1] = i;
    }

    std::string indexOfCitiesWithUniversities;

    std::getline(std::cin >> std::ws, indexOfCitiesWithUniversities);

    std::cout << indexOfCitiesWithUniversities << std::endl;

    int graph [numberOfCities - 1][2];

    for(int i = 1; i <= numberOfCities - 1; i++) {
        int x;
        int y;

        std::cin >> x >> y;

        graph[i - 1][0] = x;
        graph[i - 1][1] = y;

        std::cout << graph[i - 1][0] << " - " << graph[i - 1][1] << std::endl;
    }
/*
    for(int i = 0; i < numberOfCities - 1; i++) {
        for(int j = 0; i < 2; j++ ) {
            std::cout << graph[i][j];
        }

        std::cout << std::endl;
    }*/

    return 0;
}
