class Solution {
    public:
        long long countGood(vector<int>& nums, int k) {
            queue<int> w;
            long long pair_cnt = 0;
            map<int, int> cnt;
    
            long long bad_subarray = 0;
    
            for(int x: nums){
                pair_cnt += cnt[x];
                cnt[x]++;
                w.push(x);
    
                while(pair_cnt >= k){
                    int y = w.front();
                    w.pop();
                    pair_cnt -= cnt[y]-1;
                    cnt[y]--;
                }
    
                bad_subarray += w.size();
            }
    
            long long n = nums.size();
            return n*(n+1)/2 - bad_subarray;
        }
    };