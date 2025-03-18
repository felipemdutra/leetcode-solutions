#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i]; // Find the number we need to sum up to the target.

        // If that number is in our hash map, return the current number and the difference
        if (seen.find(diff) != seen.end()) {
            return vector {seen[diff], i};
        }

        seen[nums[i]] = i; // Else, just add the current number to our seen hash map
    }

    return {};
}

