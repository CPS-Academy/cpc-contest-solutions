class Solution {
    public:
        int numOfSubarrays(vector<int>& arr, int k, int threshold) {
            int sum = 0;
            int cnt = 0;
            for(int i = 0; i < k; i++){
                sum += arr[i];
            }
    
            if(sum >= threshold*k) cnt++;
    
            for(int i = 0; i < arr.size(); i++){
                if(i+k >= arr.size()) break;
    
                sum -= arr[i];
                sum += arr[i+k];
    
                if(sum >= threshold*k) cnt++;
            }
    
            return cnt;
        }
    };