#include <unordered_map>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    // number, how many times it has been seen 
    unordered_map<int, int> seen;
    
    for (int i = 0; i < nums.size(); ++i) {
        seen[nums[i]]++;
    }

    for (auto [num, timesSeen] : seen) {
        if (timesSeen > nums.size()/2) {
            return num;
        }
    }
    
    return 0;
}

