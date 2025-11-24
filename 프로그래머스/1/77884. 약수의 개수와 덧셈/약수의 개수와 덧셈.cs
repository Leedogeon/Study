using System;

public class Solution {
    public int solution(int left, int right) {
        int answer = 0;
        for(int i = left; i<=right; i++)
        {
            int temp =2;
            if(i == 1)
            {
                answer -=1;
                continue;
            }
            
            for(int j = 2; j<=i/2;j++)
            {
                if(i%j == 0) temp++;
            }
            if(temp%2 == 0) answer += i;
            else answer -= i;
        }
        return answer;
    }
}