using System;
using System.Linq;
public class Solution {
    public int solution(int[] A, int[] B) {
        int answer = 0;
        Array.Sort(A);
        Array.Sort(B);
        int k = B.Length-1;
        for(int i = A.Length-1;i>=0;i--)
        {
            if(A[i] < B[k])
            {
                answer++;
                k--;
            }
            else
            {
                continue;
            }
        }
        return answer;
    }
}