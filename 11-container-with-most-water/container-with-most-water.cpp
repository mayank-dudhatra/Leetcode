class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = 0;
        int left = 0;
        int right = height.size()-1;


        while(left < right){
            int w = right - left;
            int h = min(height[left], height[right]);

            int a = w*h;
            mx = max(mx, a);

            if(height[left] < height[right]) left++;
            else right--;

        }
       
        return mx;
    }
};