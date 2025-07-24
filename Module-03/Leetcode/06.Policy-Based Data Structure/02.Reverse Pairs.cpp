#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

class Solution {
public:
 
 tree<pair<long long, int>, null_type,less<pair<long long, int>>, rb_tree_tag,tree_order_statistics_node_update> s;

    int reversePairs(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            long long val = nums[i];
            int x = s.order_of_key({val * 2 + 1, 0});
            ans += s.size() - x;
            s.insert({val, i});
        }
        return ans;
    }
};