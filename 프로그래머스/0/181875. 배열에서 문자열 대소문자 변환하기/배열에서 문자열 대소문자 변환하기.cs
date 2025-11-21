using System;
using System.Linq;
public class Solution {
    public string[] solution(string[] strArr) {
        string[] answer = strArr.Select((x, index) => index % 2 == 1 ? x.ToUpper() : x.ToLower()).ToArray();
        return answer;
    }
}