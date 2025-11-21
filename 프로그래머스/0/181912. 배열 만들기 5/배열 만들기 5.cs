using System;
using System.Linq;
public class Solution {
    public int[] solution(string[] intStrs, int k, int s, int l) {
        
        int[] answer = intStrs.Select(x =>
    {   
        string subString = x.Substring(s, l);
        return int.Parse(subString);
    }).Where(num => num > k).ToArray();
        return answer;
    }
}