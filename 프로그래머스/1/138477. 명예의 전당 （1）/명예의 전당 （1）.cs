using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int k, int[] score) {
        int[] answer = new int[score.Length];
        List<int> res = new List<int>();
        for(int i = 0; i<score.Length; i++)
        {
            res.Add(score[i]);
            res.Sort();
            if (res.Count > k)
            {
                res.RemoveAt(0);
            }
            answer[i] = res[0];
        }
        return answer.ToArray();
    }
}