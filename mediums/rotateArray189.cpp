#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
    a += b;
    b = a - b;
    a = a - b;
}

void reverse(vector<int>& nums, int startIndex, int endIndex) {
    while (startIndex < endIndex) {
        swap(nums[startIndex], nums[endIndex]);
        startIndex++;
        endIndex--;
    }
}

void rotate(vector<int>& nums, int k) {
    // Return if no rotation is needed
    if (nums.size() == 0 || k % nums.size() == 0) return;
    
    // if k > nums.size()
    k %= nums.size();

    reverse(nums, 0, nums.size() - k - 1);
    reverse(nums, nums.size() - k, nums.size() - 1);
    reverse(nums, 0, nums.size() - 1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    cout << "before rotation:\n";
    for (auto& n : nums) {
        cout << n << " ";
    }

    cout << "\n";
    rotate(nums, 3);

    cout << "after rotation:\n";
    for (auto& n : nums) {
        cout << n << " ";
    }

    cout << "\n";

    return 0;
}

