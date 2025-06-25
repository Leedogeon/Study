using System;

public class Solution {
    public int solution(int n) {
            string s = n.ToString();
            int answer = 0;
            foreach(char q in s)
            {
                answer += q - '0';
            }
        return answer;
    }
}