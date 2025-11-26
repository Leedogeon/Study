using System;

public class Solution {
    public int solution(int balls, int share) {
        int answer = Com(balls,share);
        
        return answer;
    }
    public int Com(int n, int r)
    {
        if(n == r || r == 0) return 1;
        
        return Com(n-1,r-1)+Com(n-1,r);
    }
}