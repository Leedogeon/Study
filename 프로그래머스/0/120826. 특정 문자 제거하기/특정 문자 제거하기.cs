using System;
using System.Linq;
public class Solution {
    public string solution(string my_string, string letter) {
        string answer = string.Join("", my_string.Where(x => x != letter[0]));
        return answer;
    }
}