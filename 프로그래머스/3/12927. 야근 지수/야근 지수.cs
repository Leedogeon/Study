using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public long solution(int n, int[] works) {
        long answer = 0;
Array.Sort(works);
Array.Reverse(works);
Dictionary<int,int> dict = new Dictionary<int,int>();
for(int i = 0;i<works.Length;i++)
{
    if(!dict.ContainsKey(works[i]))
    {
        dict.Add(works[i], 1);
    }
    else
        dict[works[i]]++;
}

int change = 0;
while (n != 0)
{
    if (dict.Count == 0) break;
    int q = dict.Keys.Max();
    if (dict[q] >= n)
    {
        change = n;
        dict[q] -= n;
        n = 0;
    }
    else
    {
        change = dict[q];
        n -= dict[q];
        dict.Remove(q);
    }

    if (q - 1 != 0)
    {
        if (dict.ContainsKey(q - 1))
        {
            dict[q - 1] += change;
        }
        else dict.Add(q - 1, change);
    }

}

foreach(var item in dict)
{
    if(item.Value != 0)
        answer += ((long)item.Key * item.Key)*item.Value;
}
        return answer;
    }
}