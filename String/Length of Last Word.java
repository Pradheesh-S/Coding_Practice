58.Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.


Ans :
  
  class Solution {
    public int lengthOfLastWord(String s) {
        String[] arrOfStr = s.trim().split(" ");
        String str = arrOfStr[arrOfStr.length-1];
        return str.length();
    }
}
