using System;

public class Solution {
    public int[] solution(string[] wallpaper) {
                    int[] answer = new int[4];
            int startX = wallpaper[0].Length;
            int startY = wallpaper.Length;
            int endX = 0;
            int endY = 0;
            for (int i = 0; i < wallpaper.Length; i++)
            {
                for (int j = 0; j < wallpaper[i].Length; j++)
                {
                    if (wallpaper[i][j] == '#')
                    {
                        startX = startX > j ? j : startX;
                        startY = startY > i ? i : startY;
                        endX = endX < j ? j : endX;
                        endY = endY < i ? i : endY;
                    }
                }
            }
            answer[0] = startY;
            answer[1] = startX;
            answer[2] = endY+1;
            answer[3] = endX+1;
        return answer;
    }
}