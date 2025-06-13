using System;

public class Solution {
    public int solution(float price) {
        if(price < 100000) return (int)price;
        else if(price <300000) return (int)(price*0.95f);
        else if(price < 500000) return (int)(price*0.9f);
        else return (int)(price*0.8f);
    }
}