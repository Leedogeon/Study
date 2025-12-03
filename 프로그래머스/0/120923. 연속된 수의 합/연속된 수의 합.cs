using System;
using System.Linq;
public class Solution {
    public int[] solution(int num, int total) {
        int mid = total / num;
        if(num == 1) return new int[] {total};
        int[] answer = new int[] { };
        if(num %2== 1)
        {
           answer = Enumerable.Range(mid- num/2, num).ToArray();
        }
        else
        {
            answer = Enumerable.Range(mid - (num/2-1),num).ToArray();
        }     
        
        
        return answer;
    }
}