using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public string solution(string s, string skip, int index) {
        string answer = "";
        HashSet<char> skipSet = new HashSet<char>(skip);

string alpha = new string(
    Enumerable.Range('a', 26) 
              .Select(n => (char)n)
              .Where(c => !skipSet.Contains(c))
              .ToArray()
);

foreach(var item in s)
{
    int prev = alpha.IndexOf(item);
    answer += alpha[(prev + index)%(alpha.Length)];
}
        return answer;
    }
}