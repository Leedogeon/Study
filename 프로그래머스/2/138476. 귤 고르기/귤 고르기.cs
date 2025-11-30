using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(int k, int[] tangerine) {
        int answer = 0;
        int cnt = 0;
        Dictionary<int,int> dict = new Dictionary<int,int>();

        for (int i = 0; i < tangerine.Length; i++)
        {
            if (dict.ContainsKey(tangerine[i]))
            {
                dict[tangerine[i]]++;
            }
            else
            {
                dict[tangerine[i]] = 1;
            }
        }
        var sortedListAsc = dict.OrderByDescending(item => item.Value).ToList();

        foreach (var item in sortedListAsc)
        {
            cnt += item.Value;
            answer++;
            if (k <= cnt) break;
        }
        return answer;
    }
}