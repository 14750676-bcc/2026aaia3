//week06-3.cpp 學習計畫 Simulation第2題
//LeetCode 657. Robot Return to Origin
//機器人往上U,往下D,往左L,往右R,問是否會回到原來的位置
class Solution {
public:
    bool judgeCircle(string moves) {
        //程式在中間,上面3行不要動,下面2行不要動
        int x = 0, y = 0;//迴圈前面x,y都是0
        for(char c : moves){//week02教string 及C++進階for迴圈
            if(c=='U')y++;//往上,迴圈裡面 修改 x,y
            if(c=='D')y--;//往下
            if(c=='L')x--;//往左
            if(c=='R')x++;//往右
        }
        if(x==0 && y==0)return true;//迴圈後面,判斷 x,y
        else return false;
    }
};
