#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main() {

    cout << "hey" << endl;



    return 0;
}

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> indexes(2, 0);

    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                indexes[0] = i;
                indexes[1] = j;
            }

        }
    }

    return indexes;

};
