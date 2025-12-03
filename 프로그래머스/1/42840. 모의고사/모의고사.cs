using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int[] answers) {
        int[] a1 = new int[] {1,2,3,4,5};
        int[] a2 = new int[] {2,1,2,3,2,4,2,5};
        int[] a3 = new int[] {3,3,1,1,2,2,4,4,5,5};
        
        int[] res = new int[3];
        
        for(int i = 0; i< answers.Length;i++)
        {
            if(answers[i] == a1[i%a1.Length]) res[0]++;
            if(answers[i] == a2[i%a2.Length]) res[1]++;
            if(answers[i] == a3[i%a3.Length]) res[2]++;
        }
        
        List<int> mem = new List<int>();
        if(res[0] == res.Max()) mem.Add(1);
        if(res[1] == res.Max()) mem.Add(2);
        if(res[2] == res.Max()) mem.Add(3);
        
        return mem.ToArray();
    }
}