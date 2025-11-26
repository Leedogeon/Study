using System;

public class Solution {
    public int[] solution(string[] keyinput, int[] board) {
        int[] answer = new int[2];
        int maxX = board[0]/2;
        int minX = -maxX;
        int maxY = board[1]/2;
        int minY = -maxY;
        
        int curX = 0;
        int curY = 0;
        for(int i = 0; i<keyinput.Length;i++)
        {
            if(keyinput[i] == "left") curX = curX == minX ? curX : curX-1;
            else if(keyinput[i] == "right") curX = curX == maxX ? curX : curX+1;
            else if(keyinput[i] == "down") curY = curY == minY ? curY : curY-1;
            else if(keyinput[i] == "up") curY = curY == maxY ? curY : curY+1;
        }
        answer[0] = curX;
        answer[1] = curY;
        return answer;
    }
}