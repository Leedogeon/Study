using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] arr, int k) {
        int[] res = arr.Distinct().Take(k).ToArray();
        int[] answer = Enumerable.Repeat(-1,k).ToArray();

        Array.Copy(res,0, answer,0, res.Length);
        return answer;
    }
}