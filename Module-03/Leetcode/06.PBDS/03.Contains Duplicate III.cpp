#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;

class Solution {
    public:

        tree < pair < int,
    int > ,
    null_type,
    less < pair < int,
    int >> ,
    rb_tree_tag,
    tree_order_statistics_node_update > s;

    bool containsNearbyAlmostDuplicate(vector < int > & nums, int indexDiff, int valueDiff) {
        int i = 0, j = i - indexDiff;
        while (i < nums.size()) {
            int idx = s.order_of_key({
                nums[i] - valueDiff,
                0
            });
            if (idx < s.size()) {
                int vl = ( * s.find_by_order(idx)).first;
                if (vl <= nums[i] + valueDiff) return true;
            }
            s.insert({
                nums[i],
                i
            });
            if (j >= 0) s.erase({
                nums[j],
                j
            });
            i++;
            j++;
        }
        return false;
    }
};