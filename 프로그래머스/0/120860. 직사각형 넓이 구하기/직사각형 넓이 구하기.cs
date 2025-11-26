using System;
using System.Linq;
public class Solution {
    public int solution(int[,] dots) {
        int[] x = new int[4];
        int[] y = new int[4];

        for(int i = 0; i<dots.GetLength(0);i++)
        {
            x[i] = dots[i, 0];
            y[i] = dots[i, 1];
        }
        int answer = (int)Math.Abs(x.Max() - x.Min()) * (int)Math.Abs(y.Max() - y.Min());
        
        return answer;
    }
}