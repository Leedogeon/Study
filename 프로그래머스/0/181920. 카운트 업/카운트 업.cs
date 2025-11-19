using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int start_num, int end_num) {
        int[] arr = Enumerable.Range(start_num, end_num-start_num+1).ToArray();
        return arr;
    }
}