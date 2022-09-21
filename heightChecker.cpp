#include <vector>
#include <iostream>


int main(){

    std::vector<int> heights = {1,2,3,4,5};
    std::vector<int> expected = heights;

    bool swapped = true;
    int n = 0;

    std::cout << "Before the sort: ";
    for (int i = 0; i < expected.size(); i++){
        std::cout << expected[i] << " ";
    }
    std::cout << std::endl;


    while (swapped){
        swapped = false;
        for (int i = 0; i < expected.size() - 1; i++){
            if (expected[i] > expected[i+1]){
                int temp = expected[i];
                expected[i] = expected[i+1];
                expected[i+1] = temp;
                swapped = true;
            }
        }
    }

    std::cout << "After the sort: ";
    for (int i = 0; i < expected.size(); i++){
        std::cout << expected[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < expected.size(); i++){
        if (expected[i] != heights[i]){
            n++;
        }
    }

    std::cout << "The number of discrepancies: " << n << std::endl;

    return 0;
}