using System;

public class Solution {
    public int solution(int[] numbers, int k) {
        int answer = numbers[(k * 2 -2) %numbers.Length];
        return answer;
    }
}