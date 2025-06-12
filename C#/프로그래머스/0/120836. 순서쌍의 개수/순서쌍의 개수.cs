using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        int q = (int)Math.Sqrt(n);
        for(int i = 1; i<=(int)Math.Sqrt(n);i++)
        {
            if(n%i == 0) answer++;
        }
        answer*=2;
        if(q*q == n) answer--;
        return answer;
    }
}