using System;
using System.Linq;
public class Solution {
    public string solution(string my_string) {
        string answer = new string(my_string.Select(c => char.IsUpper(c) ? char.ToLower(c) :
                char.IsLower(c) ? char.ToUpper(c) : c).ToArray()
        );
        return answer;
    }
}