using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] array) {
        int[] answer = new int[2];
        answer[0] = array.Max();
        answer[1] = Array.IndexOf(array,answer[0]);
        return answer;
    }
}