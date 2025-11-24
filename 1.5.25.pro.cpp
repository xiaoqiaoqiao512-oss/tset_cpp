#include <iostream>
#include <cstring>
using namespace std;
int r, c, a[25][25], fi, fj;//(fi, fj)焦点位置
int d, dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};//右下左上 
int main()
{
    char s[85];
    cin >> r >> c;
    getchar();//吸收空格
    cin.getline(s, 105);
    int len = strlen(s), num, si, sj;
    fi = fj = 1;//初始焦点位置为(1,1) 
    memset(a, -1, sizeof(a));//a初值都设为-1 
    for(int i = 0; i < len; ++i)
    {
        if(s[i] == ' ')
            num = 0;
        else
            num = s[i] - 'A' + 1;
        int b[6] = {}, bi = 0;//把num转化成的二进制数字填入数组b，b[1]为低位 b[5]为高位
        for(int a = num; a > 0; a /= 2)
            b[++bi] = a % 2;
        for(int j = 5; j >= 1; --j)//从高位遍历到低位 
        {
            a[fi][fj] = b[j];//回形填充到数组a 
            si = fi + dir[d][0], sj = fj + dir[d][1];//(si,sj)下一个位置
            if(si > r || si < 1 || sj > c || sj < 1 || a[si][sj] != -1)//如果下一次移出了范围或下一个位置有值 
                d = (d + 1) % 4;//改变方向 
            fi += dir[d][0], fj += dir[d][1];//移动焦点
        }
    }
    for(int i = 1; i <= r; ++i)
        for(int j = 1; j <= c; ++j)
            if(a[i][j] == -1)//值为-1的地方应该填充0 
                a[i][j] = 0;
    for(int i = 1; i <= r; ++i)
        for(int j = 1; j <= c; ++j)
            cout << a[i][j];
    return 0;
}
