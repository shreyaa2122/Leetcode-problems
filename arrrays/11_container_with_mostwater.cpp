#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int l = 0, r = n - 1;
        
        while (l < r) {
            int curr = (r - l) * min(height[l], height[r]);
            area = max(area, curr);
            
            if (height[l] > height[r]) {
                r--;
            } else if (height[l] < height[r]) {
                l++;
            } else {
                l++;
                r--;
            }
        }
        
        return area;
    }
};