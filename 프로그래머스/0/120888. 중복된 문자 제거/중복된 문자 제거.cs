using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public string solution(string my_string) {
        
        IEnumerable<char> distinctChars = my_string.Distinct();

        string answer = string.Concat(distinctChars);
        return answer;
    }
}