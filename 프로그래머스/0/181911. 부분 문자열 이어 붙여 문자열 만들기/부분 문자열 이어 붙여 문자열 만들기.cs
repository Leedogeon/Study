using System;
using System.Text;
using System.Linq;
public class Solution {
    public string solution(string[] my_strings, int[,] parts) {
        var answer = new StringBuilder();
        for (int i = 0; i < parts.GetLength(0); i++)
        {
            answer.Append(my_strings[i].Substring(parts[i, 0], parts[i, 1] - parts[i,0]+1));
        }
        return answer.ToString();
    }
}