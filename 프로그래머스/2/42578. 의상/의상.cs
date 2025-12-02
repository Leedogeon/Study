using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(string[,] clothes) {
        Dictionary<string, int> dict = new Dictionary<string, int>();

for(int i = 0; i < clothes.GetLength(0); i++)
{
    string type = clothes[i, 1];
    if (dict.ContainsKey(type))
    {
        dict[type]++;
    }
    else
    {
        dict[type] = 1;
    }
}
int answer = dict.Select(x=> x.Value + 1).Aggregate(1, (a, b) => a * b) - 1;
        return answer;
    }
}