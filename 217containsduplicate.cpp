#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> intSet;

        for (int i = 0; i < nums.size(); i++){
            intSet.insert(nums[i]);
        }

        return intSet.size() < nums.size();
        
    }
};


