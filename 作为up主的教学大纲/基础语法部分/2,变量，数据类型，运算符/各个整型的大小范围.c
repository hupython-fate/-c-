#include <limits.h>  // 包含整数类型的极限值
#include <stdio.h>

int main() {
    printf("===== 有符号整数类型 =====\n");
    printf("char范围: %d ~ %d\n", CHAR_MIN, CHAR_MAX);
    printf("short范围: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("int范围: %d ~ %d\n", INT_MIN, INT_MAX);
    printf("long范围: %ld ~ %ld\n", LONG_MIN, LONG_MAX);
    printf("long long范围: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
    
    printf("\n===== 无符号整数类型 =====\n");
    printf("unsigned char最大值: %u\n", UCHAR_MAX);
    printf("unsigned short最大值: %u\n", USHRT_MAX);
    printf("unsigned int最大值: %u\n", UINT_MAX);
    printf("unsigned long最大值: %lu\n", ULONG_MAX);
    printf("unsigned long long最大值: %llu\n", ULLONG_MAX);
    
    return 0;
}