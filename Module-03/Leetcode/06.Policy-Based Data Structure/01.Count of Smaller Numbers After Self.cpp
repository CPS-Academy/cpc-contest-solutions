#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
class Solution { 
public:
 tree<pair<int, int>, null_type,less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> s;
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(n);
        for(int i = nums.size() - 1; i >= 0; i--){
            s.insert({nums[i], i});
            cnt[i] = s.order_of_key({nums[i], i});
        }
        return cnt;
    }
};