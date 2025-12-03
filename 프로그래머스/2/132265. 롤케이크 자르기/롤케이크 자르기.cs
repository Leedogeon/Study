using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(int[] topping) {
        int answer = 0;
        HashSet<int> left = new HashSet<int>();
        HashSet<int> right = new HashSet<int>();
        int[] leftsize = new int[topping.Length];
        int[] rightsize = new int[topping.Length];

        for(int i = 0; i < topping.Length; i++)
        {
            left.Add(topping[i]);
            leftsize[i] = left.Count;
        }
        for (int i = topping.Length -1; i >= 0; i--)
        {
            right.Add(topping[i]);
            rightsize[i] = right.Count;
        }

        for(int i = 0; i<topping.Length-1;i++)
        {
            if (leftsize[i] == rightsize[i+1])
            {
                answer++;
            }
        }
        return answer;
    }
}