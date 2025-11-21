using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] arr) {
        int[] answer = arr.Select(x => x >= 50 ? (x % 2 == 0 ? x /= 2 : x) : (x % 2 == 1 ? x *= 2 : x)).ToArray();
        return answer;
    }
}