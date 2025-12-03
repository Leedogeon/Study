using System;

public class Solution {
    public int solution(int[,] board) {
        int answer = board.GetLength(0)*board.GetLength(1);
        int[] x = new int [] {-1,0,1};
        int[] y = new int [] {-1,0,1};
        for(int i = 0; i< board.GetLength(0);i++)
        {
            for(int j = 0; j< board.GetLength(1);j++)
            {
                if(board[i,j] == 1)
                {
                    for(int q = 0; q<x.Length;q++)
                    {
                        for(int r = 0; r<y.Length;r++)
                        {
                            if(i + x[q] < 0 || i + x[q] >= board.GetLength(0)) continue;
                            if(j + y[r] < 0 || j + y[r] >= board.GetLength(1)) continue;
                            
                            if(board[i+x[q],j+y[r]] == 0)
                            {
                                board[i+x[q],j+y[r]] = 2;
                            }
                        }
                    }
                }
            }
        }
        
        for(int i = 0; i< board.GetLength(0);i++)
        {
            for(int j = 0; j< board.GetLength(1);j++)
            {
                if(board[i,j] != 0) answer--;
            }
        }
        return answer;
    }
}