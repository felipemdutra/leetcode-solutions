#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int l = 0, minLen = INT_MAX;
    int sum = 0;

    int currLen = 0;
    for (int r = 0; r < nums.size(); ++r) {
        if (nums[r] >= target) return 1;

        sum += nums[r];
        currLen++;

        while (sum >= target) {
            sum -= nums[l];
            l++;
            minLen = min(minLen, currLen);
            currLen--;
        }
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}

