class Solution {
    public: long long maximumSubarraySum(vector < int > & nums, int k) {
        map < int, int > cnt;
        long long sum = 0, mx = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
            cnt[nums[i]]++;
        }

        if (cnt.size() == k) {
            mx = sum;
        }

        for (int i = 0; i < nums.size(); i++) {
            sum -= nums[i];
            cnt[nums[i]]--;
            if (cnt[nums[i]] == 0) {
                cnt.erase(nums[i]);
            }

            if (i + k >= nums.size()) {
                break;
            }

            sum += nums[i + k];
            cnt[nums[i + k]]++;

            if (cnt.size() == k) {
                mx = max(mx, sum);
            }
        }

        return mx;
    }
};