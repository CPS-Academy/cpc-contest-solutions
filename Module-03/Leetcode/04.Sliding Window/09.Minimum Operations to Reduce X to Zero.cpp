class Solution {
    public: int minOperations(vector < int > & nums, int x) {
        long long sum = 0;
        for (int x: nums) {
            sum += x;
        }

        if (sum < x) {
            return -1;
        }

        long long required_sum = sum - x;
        long long window_sum = 0;
        queue < int > w;
        int mx = -1;
        for (int x: nums) {
            w.push(x);
            window_sum += x;

            while (window_sum > required_sum) {
                int z = w.front();
                w.pop();
                window_sum -= z;
            }

            if (window_sum == required_sum) {
                mx = max(mx, (int) w.size());
            }
        }

        if (mx == -1) return -1;

        return nums.size() - mx;
    }
};