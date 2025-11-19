using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        if(n%2 != 0) n -=1;
        answer = (n*(n/2+1))/2;
        return answer;
    }
}