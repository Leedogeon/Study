using System;
using System.Linq;
public class Solution {
    public string solution(string[] str_list, string ex) {
        string answer = string.Join("",str_list.Where(x=> !x.Contains(ex)).ToArray());
        return answer;
    }
}