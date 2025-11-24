#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    int num = 1;

    // 对角线总共 2n-1 条，编号 0 ... 2n-2
    for (int k = 0; k <= 2 * n - 2; k++) {

        // 计算该对角线的起始点和终止点范围
        int x_start = max(0, k - (n - 1));
        int x_end   = min(k, n - 1);

        if (k % 2 == 0) {
            // 奇数编号（k 为偶）→ 左下 → 右上
            for (int x = x_end; x >= x_start; x--) {
                int y = k - x;
                a[x][y] = num++;
            }
        } else {
            // 偶数编号（k 为奇）→ 右上 → 左下
            for (int x = x_start; x <= x_end; x++) {
                int y = k - x;
                a[x][y] = num++;
            }
        }
    }

    // 输出
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
