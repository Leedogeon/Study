using System;

public class Solution {
    public int solution(int n, int k) {
        int answer = 0;
        
        if(n >= 10) k -= (n/10);
        
        return n*12000 + k*2000;
    }
}