using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] arr, int k) {
        if(k%2==0)
            return arr.Select(x => x+k).ToArray();
        else return arr.Select(x => x*k).ToArray();
    }
}