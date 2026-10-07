//week05-3b.cpp 學系計畫 Built-In Functions第一題
//LeetCode 58. Length of Last Word  最後一個字的長度
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string now;
        while ( ss >> now ){
        }
        return now.length();
        }
};
