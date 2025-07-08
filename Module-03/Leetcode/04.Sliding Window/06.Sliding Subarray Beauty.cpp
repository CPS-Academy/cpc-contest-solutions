class Solution {
    multiset < int > ms1, ms2;
    int z;

    void balance() {
        while (ms1.size() > z) {
            ms2.insert( * ms1.rbegin());
            ms1.erase(--ms1.end());
        }

        while (ms1.size() < z && !ms2.empty()) {
            ms1.insert( * ms2.begin());
            ms2.erase(ms2.begin());
        }
    }

    void add(int v) {
        if (ms1.empty()) {
            ms1.insert(v);
        } else {
            if (v > * ms1.rbegin()) {
                ms2.insert(v);
            } else {
                ms1.insert(v);
            }
        }

        balance();
    }

    void remove(int v) {
        if (ms1.find(v) != ms1.end()) {
            ms1.erase(ms1.find(v));
        } else {
            ms2.erase(ms2.find(v));
        }

        balance();
    }

    public:
        vector < int > getSubarrayBeauty(vector < int > & nums, int k, int x) {
            z = x;

            for (int i = 0; i < k; i++) {
                add(nums[i]);
            }

            vector < int > ans;
            ans.push_back(min( * ms1.rbegin(), 0));

            for (int i = 0; i < nums.size(); i++) {
                if (i + k >= nums.size()) break;

                add(nums[i + k]);
                remove(nums[i]);

                ans.push_back(min( * ms1.rbegin(), 0));
            }

            return ans;
        }
};