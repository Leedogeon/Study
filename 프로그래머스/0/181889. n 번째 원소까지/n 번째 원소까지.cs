using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] answer = num_list.Take(n).ToArray();
        return answer;
    }
}