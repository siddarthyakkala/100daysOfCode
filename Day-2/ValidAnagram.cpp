class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt[256]={0};
        int i;
        for(i=0;s[i] && t[i];i++)
        {
            cnt[s[i]]++;
            cnt[t[i]]--;
        }
        
        if(s[i] || t[i])
            return false;
        
        for(i=0;i<256;i++)
        {
            if(cnt[i])
                return false;
        }
        
        return true;
    }
};
