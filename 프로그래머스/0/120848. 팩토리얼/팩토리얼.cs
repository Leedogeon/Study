using System;

public class Solution {
    public int solution(int n) {
        int answer = 1;
        int i = 1;
        while(i < n)
        {
            answer++;
            i*=answer;
        }
        if(i > n) answer--; 
        return answer;
    }
}