using System;
using System.Collections.Generic;
public class Solution {
    public int solution(int[] elements) {
        int answer = 0;
        HashSet<int> sum = new HashSet<int>();
        int size = elements.Length;
        
        for(int i = 0; i< size;i++)
        {
            int all = 0;
            for(int j = i; j<i+size;j++)
            {
                all += elements[j%size];
                sum.Add(all);
            }
        }
        
        return sum.Count;
    }
}