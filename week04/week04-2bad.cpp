///week04-2bad.cpp這程式是對的， 用進階C++迴圈
///但在CodeBlocks出錯，warning: range-based 'for' loops only available with ...
///2011年之後，只又在-std=c++11或 -std=gnu++11才能用
///所以，需要改一下設定
///下面是week04的小考題目SOTI106_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	for (int i=0; i<10; i++){
		cin >> now;
		if(now==0)break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int num : a){///在CodeBlocks設定出錯時，永遠跑不出答案
		if(num==now)ans++;
	}
	cout << ans <<"\n";
}///截圖時,請把Build messages裡面的藍色warning也截圖近來
