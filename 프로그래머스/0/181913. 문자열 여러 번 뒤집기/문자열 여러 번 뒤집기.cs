using System;
using System.Linq;
public class Solution {
    public string solution(string my_string, int[,] queries) {
        string[] temp = my_string.Select(c => c.ToString()).ToArray();

        string answer = "";

        for (int i = 0; i < queries.GetLength(0); i++)
        {
            Array.Reverse(temp, queries[i,0], queries[i,1] - queries[i,0] + 1);
        }

        answer = string.Join("", temp);
        return answer;
    }
}