using System;

public class Solution {
    public int solution(int num, int k) {
        int answer = 0;
        string ans = num.ToString();
        if(ans.Contains(k.ToString()))
        {
            answer = ans.IndexOf(k.ToString());
            answer++;
        }
        else answer = -1;
        return answer;
    }
}