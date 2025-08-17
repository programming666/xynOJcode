#include <iostream> // 用于标准输入输出流
#include <cmath>    // 用于数学函数 sqrt

int main() {
    // 设置cin和cout以提高执行速度，对于大数据量输入时有帮助
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long c; // 使用 long long 类型以防止 c*c 溢出
    std::cin >> c;

    bool found = false; // 用于标记是否找到解的标志位

    // 遍历 a 从 1 到 c-1
    for (long long a = 1; a < c; ++a) {
        // 计算 c*c 和 a*a
        long long c_squared = c * c;
        long long a_squared = a * a;
        
        // 计算 b 的平方
        long long b_squared = c_squared - a_squared;

        // 计算 b 的值（可能为浮点数）
        double b_double = sqrt(b_squared);
        
        // 将 b 的浮点数值转换为整数
        long long b_long = static_cast<long long>(b_double);

        // 检查 b 是否为整数 (b_long * b_long == b_squared)
        // 并且为了满足从小到大输出且不重复，我们只接受 a < b 的解
        if (b_long * b_long == b_squared && a < b_long) {
            std::cout << a << " " << b_long << std::endl;
            found = true; // 标记已找到解
            break;        // 找到第一个解后即可退出循环
        }
    }

    // 如果循环结束后仍未找到解
    if (!found) {
        std::cout << "No anSwer!" << std::endl;
    }

    return 0; // 程序正常结束
}