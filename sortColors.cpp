#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    int minIndex;

    cout << "Vector before sorting : ";
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < nums.size(); i++){
        minIndex = i;
        for (int j = i; j < nums.size(); j++){
            if (nums[minIndex] > nums[j]){
                minIndex = j;
            }
        }
        cout << "The current minimum index is: " << minIndex << endl;
        int temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    }

    cout << "Vector after sorting : ";
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }


    return 0;
};

