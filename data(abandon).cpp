// #include <iostream>
// #include <string>
// #include <cstdio>
// using namespace std;

// class Date {
// private:
//     int year, month, day;

//     // 判断闰年
//     bool isLeap(int y) const {
//         return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
//     }

//     // 返回某年某月的天数
//     int daysInMonth(int y, int m) const {
//         static const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//         if (m == 2 && isLeap(y)) return 29;
//         return days[m];
//     }

// public:
//     // 构造函数
//     Date(int y, int m, int d) {
//         year = y;
//         month = m;
//         day = d;
//     }

//     // 转换成字符串
//     string toText() const {
//         char buffer[50];
//         sprintf(buffer, "%d-%d-%d", year, month, day);
//         return buffer;
//     }

//     // 返回后一天
//     Date nextDay() const {
//         int y = year, m = month, d = day + 1;
//         int daysOfMonth = daysInMonth(y, m);
//         if (d > daysOfMonth) {
//             d = 1;
//             m++;
//             if (m > 12) {
//                 m = 1;
//                 y++;
//             }
//         }
//         return Date(y, m, d);
//     }

//     // 返回前一天
//     Date prevDay() const {
//         int y = year, m = month, d = day - 1;
//         if (d == 0) {
//             m--;
//             if (m == 0) {
//                 m = 12;
//                 y--;
//             }
//             d = daysInMonth(y, m);
//         }
//         return Date(y, m, d);
//     }
// };

// int main() {
//     int y, m, d;
//     cin >> y >> m >> d;

//     Date today(y, m, d);
//     Date next = today.nextDay();
//     Date prev = today.prevDay();

//     cout << "Date:" << today.toText()
//          << ",Next Day:" << next.toText()
//          << ",Prev Day:" << prev.toText() << endl;

//     return 0;
// }