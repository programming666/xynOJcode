#include <iostream>
#include <string>
#include <vector>

/**
 * @brief 判断一个字符串是否是回文串的辅助函数。
 * 
 * 该函数使用双指针法，一个指针从字符串头部开始，另一个从尾部开始，
 * 同时向中间移动，比较对应位置的字符是否相同。
 * 
 * @param s 需要判断的字符串。
 * @return 如果 s 是回文串则返回 true，否则返回 false。
 */
bool isPalindrome(const std::string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false; // 如果左右指针指向的字符不相等，则不是回文串
        }
        left++;
        right--;
    }
    return true; // 如果循环结束都没有返回false，则是回文串
}

/**
 * @brief 解决单个字符串的判断逻辑。
 * 
 * 该函数读取一个字符串，并判断它是否可以由两个长度至少为2的回文串拼接而成。
 */
void solve() {
    std::string s;
    std::cin >> s;

    int len = s.length();
    bool possible = false;

    // 我们需要将字符串s分割成s1和s2两部分。
    // s1的长度至少为2，s2的长度也至少为2。
    // 这意味着s的总长度至少为4。
    // 分割点i代表第一部分s1的长度。
    // i的取值范围从2开始（因为s1长度至少为2）。
    // s2的长度是 len - i，也必须>=2，所以 len - i >= 2 => i <= len - 2。
    // 因此，我们遍历所有可能的分割点i，从2到len-2。
    for (int i = 2; i <= len - 2; ++i) {
        // 提取s的前i个字符作为第一个子串s1
        std::string s1 = s.substr(0, i);
        // 提取s剩下的部分作为第二个子串s2
        std::string s2 = s.substr(i);

        // 检查s1和s2是否都为回文串
        if (isPalindrome(s1) && isPalindrome(s2)) {
            possible = true; // 如果都为回文串，则找到了一个合法的分割
            break;           // 找到了就不需要再继续查找了
        }
    }

    if (possible) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}

/**
 * @brief 程序主函数。
 * 
 * 读取字符串的数量n，然后循环n次，对每个字符串调用solve函数进行处理。
 */
int main() {
    // 加速C++的I/O操作，对于大数据量输入时有明显效果
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n; // 代表字符串数量
    std::cin >> n;
    while (n--) {
        solve(); // 对每个字符串调用解决函数
    }

    return 0;
}