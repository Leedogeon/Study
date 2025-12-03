using System;
using System.Linq;
public class Solution {
    public int solution(int k, int m, int[] score) {
        int answer = 0;
        Array.Sort(score);
        Array.Reverse(score);
        for (int i = 0; i < score.Length; i += m)
        {
            if(i+m > score.Length) break;
            int low = score[i];
            for (int j = i; j < i+m; j++)
            {
                if (score[j] < low) low = score[j];
            }
            answer += low * m;
        }
        return answer;
    }
}