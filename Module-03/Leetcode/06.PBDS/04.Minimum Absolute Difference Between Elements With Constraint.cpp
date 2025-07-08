#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;

class Solution {
    public:

        tree < int,
    null_type,
    less < int > ,
    rb_tree_tag,
    tree_order_statistics_node_update > s;

    int minAbsoluteDifference(vector < int > & nums, int x) {
        int j = 0, i = x, ans = 1e9;
        while (i < nums.size()) {
            s.insert(nums[j]);
            int d = s.order_of_key(nums[i]);
            if (d < s.size()) {
                int vl = * s.find_by_order(d);
                ans = min(ans, abs(vl - nums[i]));
            }
            if (d > 0) {
                int vl = * s.find_by_order(d - 1);
                ans = min(ans, abs(vl - nums[i]));
            }
            i++;
            j++;
        }
        return ans;
    }
};