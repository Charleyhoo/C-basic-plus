#include <cstdio>
#include <string>

int main() {
    std::string s1 = "Hello, World!";
    char buf[100];
    
    std::snprintf(buf, sizeof(buf), "s1 = %s", s1.c_str());
    // 此处假设buf的大小为100，你可以根据需要调整大小
    //sprintf(buf,"s1 = %s",s1.c_str());//将s1转换成 char*类型, 不推荐因为但它不提供足够的安全性来防止缓冲区溢出，这可能导致安全漏洞。为了避免这种情况，C/C++标准库引入了snprintf函数，它允许你指定输出缓冲区的大小，从而防止缓冲区溢出。
    // 现在buf包含了格式化后的字符串
    printf("%s\n", buf);
    
    return 0;
}
