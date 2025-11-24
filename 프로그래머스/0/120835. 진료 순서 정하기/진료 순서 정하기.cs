using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] emergency) {
        int[] temp = emergency.OrderByDescending(x => x).ToArray();

        int[] answer = new int[emergency.Length];
        int num = 1;
        foreach(int i in temp)
        {
            answer[Array.IndexOf(emergency,i)] = num++;
        }
        return answer;
    }
}