using System;

public class Solution {
    public int solution(int[] array, int n) {
        int answer = 0;
        foreach(int a in array)
        {
            if(n == a) answer++;
        }
        return answer;
    }
}