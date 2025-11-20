using System;
using System.Linq;
public class Solution {
    public int[] solution(string myString) {
        string[] ans = myString.Split('x');
int[] answer = ans.Select(x => x.Length).ToArray();
        return answer;
    }
}