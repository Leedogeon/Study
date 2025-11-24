using System;
using System.Linq;
public class Solution {
    public int solution(int[] a, int[] b) {
        int answer = a.Zip(b, (q, w) => q * w).Sum();
        return answer;
    }
}