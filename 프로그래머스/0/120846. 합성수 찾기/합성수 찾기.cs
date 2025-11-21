using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        for(int i = 4; i<=n;i++)
        {
            int can = 0;
            for(int j = 2; j<=i/2;j++)
            {
                if(i%j == 0) can++;
                
                if(can != 0 )
                {
                    answer++;
                    break;
                }
            }
            
            
        }
        
        return answer;
    }
}