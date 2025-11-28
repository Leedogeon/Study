using System;

public class Solution {
    public int solution(int n) {
        int cnt = 0;
        int answer = 0;

        while(n > cnt)
        {
            answer++;
            if(answer %3 == 0) 
            {
                continue;
            }
            if(answer.ToString().Contains("3"))
            {
                continue;
            }
            cnt++;
        }
        return answer;
    }
}