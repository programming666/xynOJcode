#include <iostream>
#include <string>
#include <vector>

int main() {
    // 优化输入输出速度
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // 声明一个整型变量 n 用于存储输入的偏移量
    int n;

    // 从标准输入读取偏移量 n
    std::cin >> n;

    // 原始大写字母表
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // 计算实际的偏移量。因为字母表是循环的，偏移26位等于没有偏移。
    // 使用取模运算符 (%) 可以处理 n 大于或等于 26 的情况。
    int shift = n % 26;

    // 使用 substr 方法分割并拼接字符串来得到移位后的结果
    // 1. alphabet.substr(shift) 获取从 'shift' 索引到字符串末尾的部分
    //    例如, shift=3, 这部分是 "DEFGHIJKLMNOPQRSTUVWXYZ"
    // 2. alphabet.substr(0, shift) 获取从头开始，长度为 'shift' 的部分
    //    例如, shift=3, 这部分是 "ABC"
    // 3. 两部分拼接起来就是最终结果
    std::string shifted_alphabet = alphabet.substr(shift) + alphabet.substr(0, shift);

    // 输出移位后的字母表
    std::cout << shifted_alphabet << std::endl;

    return 0;
}