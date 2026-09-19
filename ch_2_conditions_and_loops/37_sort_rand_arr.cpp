#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 10); // random num between 0 and 10

    const int size = 10; // size of array
    int rand_nums[size];

    int i, j, s; // variables for sorting

    std::cout << "Array of random nums before sorting: \n| ";
    for (int &num: rand_nums) {
        num = distr(gen); // generate random num between 0..10
        std::cout << num << " | ";
    }
    std::cout << std::endl;

    std::cout << "\nArray after sorting: \n| ";
    // array sorting
    for (i=1; i<=size-1; i++) {
        // iterating over array elements
        for (j=0; j<size-1; j++) {
            if (rand_nums[j] < rand_nums[j+1]) {
                s = rand_nums[j+1];
                rand_nums[j+1] = rand_nums[j];
                rand_nums[j] = s;
            }
        }
    }
    // printing sorted array
    for (int num : rand_nums) {
        std::cout << num << " | ";
    }
    std::cout << std::endl;

    return 0;
}
