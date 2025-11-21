using System;
using System.Linq;
public class Solution {
    public bool solution(int x) {
        string num = x.ToString();
        int[] arr = num.Select(a => int.Parse(a.ToString())).ToArray();
        int sum = arr.Sum();
        if(x % sum == 0) return true;
        else return false;
    }
}