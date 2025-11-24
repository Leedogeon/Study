using System;
using System.Linq;
public class Solution {
    public string solution(string s) {
        string answer = string.Join("",s.OrderByDescending(x=>x));
        return answer;
    }
}