using System;
using System.Linq;
public class Solution {
    public string solution(string s) {
        string answer = string.Concat(s.Where(x => s.Count(o => o == x) == 1).OrderBy(x => x));
        return answer;
    }
}