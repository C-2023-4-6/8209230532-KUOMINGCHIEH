// experiment2-5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main() {
    char c;//宣告C作為儲存數據的工具
    int letters = 0, spaces = 0, digits = 0,others = 0;;//宣告要取得的數據
    cout << "輸入一行字符" << endl;
    while ((c = cin.get()) != '\n') {//使用cin.get()取得鍵盤鍵入的文字並利用while迴圈判斷換行
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))){//判斷字母
            letters++;
        }
        else if(c == ' ') {//判斷空格
            spaces++;
        }
        else if((c>='0')&&(c<='9')){//判斷數字
            digits++;
        }
        else {//判斷其他
            others++;
        }
    }
    cout << "字母數" <<letters <<endl;
    cout << "空格數" << spaces <<endl;
    cout << "數字個數" << digits <<endl;
    cout << "其他字符數" << others <<endl;
  
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
