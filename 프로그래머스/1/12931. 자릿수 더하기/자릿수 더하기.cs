using System;
using System.Linq;
public class Solution {
    public int solution(int n) {
        string num = n.ToString();
        int answer = num.Sum(x=> Int32.Parse(x.ToString()));
        
        return answer;
    }
}