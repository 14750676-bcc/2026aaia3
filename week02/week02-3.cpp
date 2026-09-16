//week02-3.cpp學習計畫Basic第1個
//LeetCode 1768. Merge Strings Alternately
//上週教 字串的長度 length()
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(), N2 = word2.length();//字串的長度
        string ans;//用來放答案的字串
        for(int i=0; i<max(N1,N2); i++){//(比較長的為主)逐一檢查、插入
            if(i < N1) ans += word1[i];//i沒超過範圍，就插入word[1]
            if(i < N2) ans += word2[i];//i沒超過範圍，就插入word[2]
        }
        return ans;//答案的字串，在這裡
    }
};
