class Solution {
public:
    int reverse(int x) {
        long temp=x;
        bool flag=false;
        if(x<0)
        {
          temp*=-1;
          flag=true;
        }
        long rev=0;
        while(temp)
        {
            int rem = temp % 10;
            temp = temp /10;
            if( rev * 10 > INT_MAX)
            {
                return 0;    
            }
            rev = rev * 10 + rem;
        }
        
        if(flag)
        {
            return -rev;
        }
        else
        {
           return rev;
        }
    }
};
