using System;
using System.Linq;
public class Solution {
    public int solution(int[] num_list) {
        string num1 = string.Join("", num_list.Where(x => x % 2 == 0));
        string num2 = string.Join("", num_list.Where(x => x % 2 == 1));

        return Int32.Parse(num1) + Int32.Parse(num2);
       }
}