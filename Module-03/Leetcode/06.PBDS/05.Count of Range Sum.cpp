#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
class Solution {
    public: tree < pair < long long,
    int > ,
    null_type,
    less < pair < long long,
    int >> ,
    rb_tree_tag,
    tree_order_statistics_node_update > s;

    int countRangeSum(vector < int > & nums, int lower, int upper) {
        s.insert({
            0,
            -1
        });
        long long ps = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ps += nums[i];
            int x = s.order_of_key({
                ps - lower + 1,
                -1
            });
            int y = s.order_of_key({
                ps - upper,
                -1
            });
            if (x > y) ans += x - y;
            s.insert({
                ps,
                i
            });
        }
        return ans;
    }
};