using System;
using System.Linq;

public class Solution {
    public int[] solution(string my_string) {
        int[] answer = my_string.Where(x => char.IsNumber(x))
            .Select(x => Convert.ToInt32(x.ToString()))
            .OrderBy(x => x).ToArray();
        
        return answer;
    }
}