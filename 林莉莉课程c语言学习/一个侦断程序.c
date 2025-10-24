#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <wchar.h>

int main() {
    printf("=== 详细编码诊断 ===\n");
    
    // 测试本地化设置
    printf("1. 设置前本地化: %s\n", setlocale(LC_ALL, NULL));
    
    char* locale_result = setlocale(LC_ALL, "zh_CN.UTF-8");
    printf("2. 设置后本地化: %s\n", locale_result ? locale_result : "NULL");
    
    // 测试普通字符输出
    printf("3. 普通输出测试: 你好世界\n");
    
    // 测试宽字符输出
    setlocale(LC_ALL, "");
    wprintf(L"4. 宽字符输出测试: 你好世界\n");
    
    // 重置为UTF-8
    setlocale(LC_ALL, "zh_CN.UTF-8");
    
    // 输入测试
    char input[50];
    printf("5. 请输入中文: ");
    int scan_result = scanf("%49s", input);
    printf("6. scanf返回值: %d\n", scan_result);
    printf("7. 输入内容: %s\n", input);
    printf("8. 输入长度: %zu\n", strlen(input));
    
    // 十六进制显示
    printf("9. 十六进制: ");
    for(int i = 0; i < strlen(input) && i < 30; i++) {
        printf("%02X ", (unsigned char)input[i]);
    }
    printf("\n");
    
    return 0;
}