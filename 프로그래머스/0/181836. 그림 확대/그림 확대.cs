using System;
using System.Linq;
public class Solution {
    public string[] solution(string[] picture, int k) {
            string[] answer = picture.SelectMany(x => {
                string res = string.Concat(x.SelectMany(s => new string(s, k)));
                return Enumerable.Repeat(res, k);
            }).ToArray();

        return answer;
    }
}