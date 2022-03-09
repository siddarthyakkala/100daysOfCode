class Solution {
public:
    int firstUniqChar(string s) {
        int cnt[256];
        for(int i=0;i<256;i++)
        {
            cnt[i]=-1;
        }
        
        for(int i=0;i<s.size();i++)
        {
            //if a character is appearing then we assign it to the index of string
            if(cnt[s[i]]==-1)
            {
                cnt[s[i]]=i;
            }
            //if cnt is -2 then it is repeating
            else
            {
                cnt[s[i]]=-2;
            }
        }
        
        int res=INT_MAX;
        
        for(int i=0;i<256;i++)
        {
            if(cnt[i]>=0)
            {
                res=min(res,cnt[i]);
            }
        }
        
        //if res is max then all the char frequency is greater than one
        
        if(res == INT_MAX)
        {
            return -1;
        }
        else
        {
            return res;
        }
    }
};
