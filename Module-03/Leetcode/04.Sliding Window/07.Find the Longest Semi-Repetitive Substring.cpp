class Solution {
    public:
        int longestSemiRepetitiveSubstring(string s) {
            deque<char> w;
            int cnt = 0;
            int mx = 0;
    
            for(char c: s){
                if(!w.empty() && w.back()==c){
                    cnt++;
                }
                w.push_back(c);
    
                if(cnt>1){
                    while(cnt>1){
                        if(w[0]==w[1]){
                            cnt--;
                        }
                        w.pop_front();
                    }
                }
    
                mx = max(mx, (int) w.size());
            }
    
            return mx;
        }
    };