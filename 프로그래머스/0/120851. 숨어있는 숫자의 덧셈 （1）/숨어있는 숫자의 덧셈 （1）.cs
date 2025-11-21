using System;
using System.Linq;
public class Solution {
    public int solution(string my_string) {
        int answer = my_string.Where(x => char.IsDigit(x)).Sum(x=>Int32.Parse(x.ToString()));
        
        return answer;
    }
}