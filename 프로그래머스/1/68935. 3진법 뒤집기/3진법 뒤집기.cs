using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        string num = "";
        while(n > 0)
        {
            num+=n%3;
            n/=3;
        }
        int len = num.Length-1;
        foreach(char c in num)
        {
            int q = (c-'0');
            answer += (int)Math.Pow(3,len) * q;
            len--;
        }
        return answer;
    }
}