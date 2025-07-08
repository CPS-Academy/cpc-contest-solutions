class Solution {
    public: int numberOfSubarrays(vector < int > & nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] %= 2;
        }

        vector < int > before(nums.size(), 0);
        vector < int > after(nums.size(), 0);

        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                cnt++;
            } else {
                before[i] = cnt;
                cnt = 0;
            }
        }

        cnt = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == 0) {
                cnt++;
            } else {
                after[i] = cnt;
                cnt = 0;
            }
        }

        vector < pair < int, int >> v;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                v.push_back({
                    before[i],
                    after[i]
                });
            }
        }

        int ans = 0;
        for (int i = 0; i < v.size(); i++) {
            if (i + k - 1 >= v.size()) break;

            ans += (v[i].first + 1) * (v[i + k - 1].second + 1);
        }

        return ans;
    }
};