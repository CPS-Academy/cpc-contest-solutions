class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            int match_count = 0;
            vector<int> ans;
    
            vector<int> cnt_p(26, 0);
            vector<int> cnt_w(26, 0);
    
            for(char c: p){
                cnt_p[c-'a']++;
            }
    
            int k = p.size();
    
            if(k > s.size()) return {};
    
            for(int i = 0; i < k; i++){
                cnt_w[s[i]-'a']++;
            }
    
            for(int i = 0; i < 26; i++){
                if(cnt_w[i]==cnt_p[i]) match_count++;
            }
    
            if(match_count == 26){
                ans.push_back(0);
            }
    
            for(int i = 0; i < s.size(); i++){
                if(i+k >= s.size()) break;
    
                if(cnt_w[s[i]-'a']==cnt_p[s[i]-'a']) match_count--;
                cnt_w[s[i]-'a']--;
                if(cnt_w[s[i]-'a']==cnt_p[s[i]-'a']) match_count++;
    
                if(cnt_w[s[i+k]-'a']==cnt_p[s[i+k]-'a']) match_count--;
                cnt_w[s[i+k]-'a']++;
                if(cnt_w[s[i+k]-'a']==cnt_p[s[i+k]-'a']) match_count++;
    
                if(match_count==26){
                    ans.push_back(i+1);
                }
            }
    
            return ans;
        }
    };