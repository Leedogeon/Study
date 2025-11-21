using System;
using System.Linq;
public class Solution {
    public string[] solution(string[] names) {
        string[] answer = names.Where((x,index) => index%5 == 0).ToArray();
        return answer;
    }
}