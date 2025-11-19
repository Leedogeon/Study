using System;
using System.Linq;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int sum = num_list.Sum();
        int mul = num_list.Aggregate(1,(acc,cur) => acc*cur);
        
        return sum*sum > mul ? 1 : 0;
    }
}