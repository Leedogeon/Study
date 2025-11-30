using System;

public class Solution {
    public int solution(int a, int b, int n) {
        int answer = 0;
        while(n >= a)
        {
            int temp = n%a;
            int re = (n/a)*b;
            answer += re;
            n = re + temp;
        }
        return answer;
    }
}