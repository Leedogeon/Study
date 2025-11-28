using System;

public class Solution {
    public int solution(int[,] sizes) {
        int answer = 0;
        int maxX = 0;
        int maxY = 0;

        for(int i = 0; i < sizes.GetLength(0); i++)
        {
            int x = Math.Max(sizes[i, 0], sizes[i, 1]);
            int y = Math.Min(sizes[i, 0], sizes[i, 1]);

            if(x>maxX) maxX = x;
            if(y>maxY) maxY = y;
        }
        answer = maxX * maxY;
        return answer;
    }
}