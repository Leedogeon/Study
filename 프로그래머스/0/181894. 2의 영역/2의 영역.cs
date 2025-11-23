using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] arr) {
        int start = Array.IndexOf(arr, 2);
        if(start == -1)
            return new int[] {-1};
        int end = Array.LastIndexOf(arr, 2);
        int[] answer = arr.Skip(start).Take(end - start+1).ToArray();
                
        return answer;
    }
}