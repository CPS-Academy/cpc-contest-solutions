class Solution {
    public:
        bool hasAllCodes(string s, int k) {
            int x = 0;
            set<int> st;
    
            if(s.size() < k) return false;
    
            for(int i = 0; i < k; i++){
                int bit = s[i]-'0';
                x <<= 1;
                if(bit){
                    x |= 1;
                }
            }
    
            st.insert(x);
    
            for(int i = 0; i < s.size(); i++){
                if(i+k >= s.size()) break;
    
                if(s[i]=='1'){
                    x = x^(1<<(k-1));
                }
    
                x <<= 1;
    
                if(s[i+k]=='1'){
                    x |= 1;
                }
    
                st.insert(x);
            }
    
            return st.size()==(1<<k);
        }
    };