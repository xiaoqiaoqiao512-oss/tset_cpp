#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int row,col;
    if (!(cin >> row >> col)) return 0;
    string line;
    getline(cin, line); // 读取剩余的换行符
    if (!getline(cin, line)) line = ""; // 读取实际的字符串输入（可能为空）

    if (row <= 0 || col <= 0) return 0;

    vector<int> cha;
    for(char c: line){
        if (isalpha((unsigned char)c)){
            char u = toupper((unsigned char)c);
            cha.push_back(u - 'A' + 1);
        } else if (c == ' ') {
            cha.push_back(0);
        } else {
            // 非字母非空格，忽略
        }
    }

    string line2;
    for(int v : cha){
        unsigned int uv = static_cast<unsigned int>(v);
        for(int b = 4; b >= 0; --b){
            line2.push_back(char('0' + ((uv >> b) & 1)));
        }
    }
    while((int)line2.size() < row * col)
        line2 += '0';

    vector<vector<int>> list(row, vector<int>(col, 0));

    // 更可靠的螺旋填充实现
    int idx = 0;
    int top = 0, bottom = row - 1, leftb = 0, rightb = col - 1;
    while (top <= bottom && leftb <= rightb && idx < (int)line2.size()) {
        for (int j = leftb; j <= rightb && idx < (int)line2.size(); ++j) {
            list[top][j] = line2[idx++] - '0';
        }
        ++top;
        for (int i = top; i <= bottom && idx < (int)line2.size(); ++i) {
            list[i][rightb] = line2[idx++] - '0';
        }
        --rightb;
        if (top <= bottom) {
            for (int j = rightb; j >= leftb && idx < (int)line2.size(); --j) {
                list[bottom][j] = line2[idx++] - '0';
            }
            --bottom;
        }
        if (leftb <= rightb) {
            for (int i = bottom; i >= top && idx < (int)line2.size(); --i) {
                list[i][leftb] = line2[idx++] - '0';
            }
            ++leftb;
        }
    }

    for(int m = 0; m < row; ++m){
        for(int n = 0; n < col; ++n){
            cout << list[m][n];
        }
    }
    return 0;
}