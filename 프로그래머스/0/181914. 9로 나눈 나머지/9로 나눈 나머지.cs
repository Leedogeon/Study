using System;
using System.Linq;
public class Solution {
    public int solution(string number) {
        int answer = number.Select(x => x-'0').Sum()%9;
        return answer;
    }
}