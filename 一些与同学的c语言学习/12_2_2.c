#include <stdio.h>

// 递归函数
void buyChicken(int rooster, int hen, int chick, int money, int count) {
    // 递归终止条件：已经买了100只鸡
    if (count == 100) {
        // 如果钱也刚好用完，则输出结果
        if (money == 0) {
            printf("公鸡: %d只, 母鸡: %d只, 小鸡: %d只\n", 
                   rooster, hen, chick);
        }
        return;
    }
    
    // 递归条件：继续买鸡
    
    // 1. 尝试买一只公鸡（如果有足够钱和数量）
    if (money >= 5 && count < 100) {
        buyChicken(rooster + 1, hen, chick, money - 5, count + 1);
    }
    
    // 2. 尝试买一只母鸡（如果有足够钱和数量）
    if (money >= 3 && count < 100) {
        buyChicken(rooster, hen + 1, chick, money - 3, count + 1);
    }
    
    // 3. 尝试买三只小鸡（如果有足够钱和数量）
    if (money >= 1 && count + 3 <= 100) {
        buyChicken(rooster, hen, chick + 3, money - 1, count + 3);
    }
}

int main() {
    printf("百钱买百鸡问题的所有解：\n");
    printf("========================\n");
    
    // 初始状态：没有买任何鸡，有100文钱，需要买0只鸡
    buyChicken(0, 0, 0, 100, 0);
    
    return 0;
}
