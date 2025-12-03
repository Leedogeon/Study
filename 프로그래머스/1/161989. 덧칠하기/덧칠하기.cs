using System;

public class Solution {
    public int solution(int n, int m, int[] section) {
        int answer = 0;
        if(m == 1) return section.Length;
        int clear = 0;
        for(int i = 0; i<section.Length;i++)
        {
            if(clear < section[i])
            {
                clear = section[i] + m -1;
                answer++;
            }
            else continue;
        }
        
        return answer;
    }
}