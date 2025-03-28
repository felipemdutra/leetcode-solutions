#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int i = 0, j = height.size() - 1;
    int maxA = 0;
    int currArea = 0;

    while (i < j) {
        if (height[i] < height[j]) {
            currArea = (j - i) * height[i];
            i++;
        } else {
            currArea = (j - i) * height[j];
            j--;
        }

        maxA = max(maxA, currArea);
    }

    return maxA;
}

int main() {
    vector<int> height = {1, 1};
    int maxA = maxArea(height);
    cout << maxA << '\n';

    return 0;
}

