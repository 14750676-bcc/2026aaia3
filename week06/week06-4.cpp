//week06-4.cpp 學習計畫 Simulation第1題
//LeetCode 682. Baseball Game
//5:陣列裡5
//2:陣列裡5 2
//C:陣列裡5(刪掉了最後的2)
//D:陣列裡5 10 (把最後的5,變2倍,套入)
//+:陣列裡5 10 15 (最後2個數 5+10變15,套入)
//答案是,把所有的數加起來
class Solution {
public://week02教string, week03教vector<int>
    int calPoints(vector<string>& operations) {
        //遇到Simulation模擬,就用for迴圈,一步步做
        //week03 week04教過C++進階for迴圈 for(char c : s) for(int num : a)
        vector<int> a;//迴圈前面 伸縮自如的C++ 的陣列
        for(string s : operations){//大資料結構vector裡,裝小資料結構string
            if(s=="C"){//字串string是雙引號,字母才是單引號
                a.pop_back();
            }else if(s=="D"){
                a.push_back(a[a.size()-1]*2);
            }else if (s=="+"){
                a.push_back(a[a.size()-2]+a[a.size()-1]);
            }else{//剩下的,就是單純的放入數字(可能是很多位的數字)
            //Google: C++ string to int
            //有三種方法,可以把string變int整數
            //a.push_back(stoi(s));//方法1: stoi(s)在C++最簡單的方法
            //a.push_back(atoi(s.c_str()));//方法2: atoi(s.c_str())在C++轉成傳統C語言方法
            //方法3上週教過的stringstream字串變串流,再流到答案裡
            int now;
            stringstream ss(s);
            ss >> now;
            a.push_back(now);
            }
        }
        int ans = 0;//迴圈前面ans是0
        for(int num : a){
            ans += num;//迴圈中間ans慢慢加
        }
        return ans;//迴圈後面ans拿來用
    }
};
