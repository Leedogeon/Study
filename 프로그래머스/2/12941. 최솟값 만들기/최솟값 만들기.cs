using System;
using System.Linq;
public class Solution {
    public int solution(int[] A, int[] B) {
        Array.Sort(A);
        Array.Sort(B, (q, r) => r.CompareTo(q));
        int answer = A.Zip(B, (q, r) => q * r).Sum();
        return answer;
    }
}