using System;
using System.Linq;
public class Solution {
    public string[] solution(string[] str_list) {
        int l = Array.IndexOf(str_list, "l");
        int r = Array.IndexOf(str_list, "r");
        return (l == -1 && r == -1) ? new string[] { } :
        ((l == -1 ? r+1 : l) < (r == -1 ? l+1 : r) ?
                 str_list.Take(l).ToArray() : str_list.Skip(r + 1).ToArray());
        ;
    }
}