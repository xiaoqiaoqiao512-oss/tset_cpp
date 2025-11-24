// 【问题描述】计算两个最长十位的十进制正整数的乘积并输出。
// 【输入形式】输入两个最长十位的十进制正整数，两数之间以一个空格间隔。
// 【输出形式】两数乘积的十进制形式。
// 【样例输入】1234567890 9876543210
// 【样例输出】12193263111263526900
// 【样例说明】一共五组测试数据。
// 【评分标准】 每组测试数据运行正确即给20%的分数。
// #include <iostream>
// #include<string>
// using namespace std;

// int main(){
//     string num1, num2;
//     cin>>num1>>num2;
//     int len1 = num1.size();
//     int len2 = num2.size();
//     int res[20] = {0};
//     for(int i=len1-1; i>=0; i--){
//         for(int j=len2-1; j>=0; j--){
//             int mul = (num1[i]-'0') * (num2[j]-'0');
//             int p1 = i + j;
//             int p2 = i + j + 1;
//             int sum = mul + res[p2];
//             res[p2] += sum % 10;
//             res[p1] += sum / 10;
//         }
//     }
//     for(int i=0; i<20; i++){
//         if(res[i]>=10){
//             res[i-1] += res[i]/10;
//             res[i] = res[i]%10;
//         }
//     }

// }