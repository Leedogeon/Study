using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] arr) {
        int[] answer = arr.SelectMany(x => Enumerable.Repeat(x, x)).ToArray();
        return answer;
    }
}