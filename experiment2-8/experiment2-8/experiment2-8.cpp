﻿// experiment2-8.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "輸入 a 的值：" << endl;
    cin >> a;
    double x0 = a, x1;
    if (a > 0) {
        while (a > 0) {
            x1 = (x0 + a / x0) / 2;//迭代
            if ((abs(x1 - x0) < 1e-5) || (a < 0)) {//當小於10^-5次方，跳出迴圈
                break;
            }
            x0 = x1;
        }
        cout << "a 的平方根為" << x1 << endl;
    }
    else {
        cout << "a小於0" << endl;//當a小於0
    }
   
    return 0;
}
   
    
   


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
