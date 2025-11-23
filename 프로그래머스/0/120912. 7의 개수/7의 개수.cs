using System;
using System.Linq;
public class Solution {
    public int solution(int[] array) {
        return array.Select(x => x).Sum(x => x.ToString().Count(c=>c=='7'));
    }
}