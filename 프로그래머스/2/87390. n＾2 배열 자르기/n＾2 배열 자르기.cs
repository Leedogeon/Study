using System;

public class Solution {
    public int[] solution(int n, long left, long right) {
        int size = (int)(right - left) + 1;
        int[] answer = new int[size];
        int cnt = 0;
        for(long i = left; i<=right;i++)
        {
            long max = i%n >= i/n ? i%n : i/n;
            answer[cnt++] = (int)max+1;
        }
        return answer;
    }
}