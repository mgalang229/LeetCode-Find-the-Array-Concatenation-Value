class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n / 2; i++) {
            int value = stoi(to_string(nums[i]) + "" + to_string(nums[n-1-i]));
            ans += value;
        }
        if (n % 2 == 1) {
            ans += nums[n/2];
        }
        return ans;
    }
};
