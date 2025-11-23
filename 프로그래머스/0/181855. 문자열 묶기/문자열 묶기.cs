using System;
using System.Linq;
public class Solution {
    public int solution(string[] strArr) {
        return strArr.GroupBy(x => x.Length).OrderByDescending(y => y.Count()).First().Count();
        
    }
}