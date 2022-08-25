using namespace std;
#include <vector>;

class Solution {
public:

//Need to do in python next


    vector<int> twoSum(vector<int>& nums, int target) {
        
        if (nums.size() == 0){
            return nums;
        }
        
        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                    if (nums[j] + nums[i] == target){
                        vector<int> ans = {i, j};
                        return ans;
                    }
                }
            }
        
        return nums;

    }

};