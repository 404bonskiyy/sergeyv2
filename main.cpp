#include <iostream>
#include <random>

int getRandomNumber(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(min, max);

    return dist(gen);
}

int main()
{
    int min, max;

    std::cout << "Enter minimum number: ";
    std::cin >> min;

    std::cout << "Enter maximum number: ";
    std::cin >> max;

    std::cout << "Random number: " << getRandomNumber(min, max) << std::endl;

    return 0;
}
