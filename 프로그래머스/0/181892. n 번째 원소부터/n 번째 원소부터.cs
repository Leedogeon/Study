using System;
using System.Collections.Generic;
using System.Dynamic;
using System.Linq;

public class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] list = num_list.Skip(n-1).Take(num_list.Length-n+1).ToArray();
        return list.ToArray();
    }
}