using System;

public class Solution {
    public int solution(string t, string p) {
        int answer = 0;
        for(int i =0; i<t.Length-p.Length+1;i++)
        {
            string s = t.Substring(i,p.Length);
            answer += long.Parse(p) >= long.Parse(s) ? 1:0;
        }
        return answer;
    }
}