using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int[] numbers) {
        List<int> answer = new List<int>();

        for(int i = 0; i<numbers.Length;i++)
        {
            for(int j = i+1;j<numbers.Length;j++)
            {
                int res = numbers[i] + numbers[j];
                if (answer.Contains(res)) continue;
                else answer.Add(res);
            }
        }
        answer.Sort();
        return answer.ToArray();
    }
}