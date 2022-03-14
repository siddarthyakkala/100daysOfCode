class Solution {
    public boolean isHappy(int n) {
        Set<Integer> st = new HashSet<Integer>();
        int squareSum,rem;
        while(st.add(n))
        {
            squareSum=0;
            while(n>0)
            {
                rem = n % 10;
                squareSum += rem * rem ;
                n/=10;
            }
            
            if(squareSum==1) 
                return true;
            else 
                n=squareSum;
        }
        return false;
    }
}
