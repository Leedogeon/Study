using System;
using System.Linq;
public class Solution {
    public string solution(string letter) {
        string[] morse = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

        string[] words = letter.Split(" ");


        string answer = string.Join("", words.Select(x => (char)(Array.IndexOf(morse,x) + 97)));
        return answer;
    }
}