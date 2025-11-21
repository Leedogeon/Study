using System;
using System.Linq;
public class Solution {
    public string solution(string myString) {
        myString = myString.ToLower();
        string answer = myString.Replace("a", "A");
        return answer;
    }
}