using System;
using System.Linq;
public class Solution {
    public int solution(string before, string after) {
        int answer = 0;
        string sortedb = string.Concat(before.OrderBy(x=>x));
        string sorteda = string.Concat(after.OrderBy(x=>x));
        
        return sortedb == sorteda? 1 :0 ;
    }
}