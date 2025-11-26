using System;
public class Solution {
    
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        answer[0] = GCD(Math.Max(m, n), Math.Min(m, n));
        answer[1] = (n * m) / answer[0];
        return answer;
    }
    
    int GCD(int A,int B)
        {
            if (A == 0) return B;
            else return GCD(B % A, A);
        }
}