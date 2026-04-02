#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// 每月天数（2023年是平年）
const int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 解析字段，将符合条件的值记录在 arr 中（arr 下标从 1 或 0 开始，根据字段范围决定）
void parse_field(const char *s, bool *arr, int min_val, int max_val) {
    if (s[0] == '*') {
        // 所有值都包含
        for (int i = min_val; i <= max_val; i++) {
            arr[i] = true;
        }
        return;
    }

    // 检查是否有逗号
    if (strchr(s, ',') != NULL) {
        char *token = strtok((char *)s, ",");
        while (token != NULL) {
            // 每个 token 可能是 "x" 或 "x-y"
            if (strchr(token, '-') != NULL) {
                int a, b;
                sscanf(token, "%d-%d", &a, &b);
                for (int i = a; i <= b; i++) {
                    if (i >= min_val && i <= max_val) arr[i] = true;
                }
            } else {
                int val = atoi(token);
                if (val >= min_val && val <= max_val) arr[val] = true;
            }
            token = strtok(NULL, ",");
        }
    } else if (strchr(s, '-') != NULL) {
        // 范围
        int a, b;
        sscanf(s, "%d-%d", &a, &b);
        for (int i = a; i <= b; i++) {
            if (i >= min_val && i <= max_val) arr[i] = true;
        }
    } else {
        // 单个数字
        int val = atoi(s);
        if (val >= min_val && val <= max_val) arr[val] = true;
    }
}

int main() {
    char sec_str[100], min_str[100], hour_str[100], day_str[100], month_str[100];
    scanf("%s %s %s %s %s", sec_str, min_str, hour_str, day_str, month_str);

    // 定义各字段的布尔数组（下标直接对应实际值）
    bool sec[60] = {false};      // 0~59
    bool minu[60] = {false};     // 0~59
    bool hour[24] = {false};     // 0~23
    bool day[32] = {false};      // 1~31
    bool month[13] = {false};    // 1~12

    parse_field(sec_str, sec, 0, 59);
    parse_field(min_str, minu, 0, 59);
    parse_field(hour_str, hour, 0, 23);
    parse_field(day_str, day, 1, 31);
    parse_field(month_str, month, 1, 12);

    // 计算每个字段的取值个数
    long long S = 0, M = 0, H = 0;
    for (int i = 0; i < 60; i++) {
        if (sec[i]) S++;
        if (minu[i]) M++;
    }
    for (int i = 0; i < 24; i++) {
        if (hour[i]) H++;
    }

    // 枚举所有有效的 (月, 日) 组合
    long long total = 0;
    for (int m = 1; m <= 12; m++) {
        if (!month[m]) continue;
        int max_day = days_in_month[m];
        for (int d = 1; d <= max_day; d++) {
            if (day[d]) {
                total += S * M * H;
            }
        }
    }

    printf("%lld\n", total);
    return 0;
}