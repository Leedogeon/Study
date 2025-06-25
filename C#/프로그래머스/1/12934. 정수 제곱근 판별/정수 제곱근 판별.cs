using System;
using System.Linq;
public class Solution {
    public long solution(long n) {
        long answer = 0;
        long q = (long)Math.Sqrt(n);
        if(q*q == n) answer = (q+1)*(q+1);
        else answer = -1;
        return answer;
    }
}