using System;
using System.Linq;
public class Solution {
    public int solution(int[] array) {
        var list = array.GroupBy(x => x, g => g, (x, g) => new { n = x, cnt = g.Count() });
        var max = list.Where(x => x.cnt == list.Max(o => o.cnt));
        int answer = max.Count() == 1 ? max.First().n : -1;
        return answer;
    }
}