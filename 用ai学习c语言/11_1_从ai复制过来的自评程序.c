#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>  // 用于创建目录

// 创建目录
int createDirectory(const char *path) {
    #ifdef _WIN32
        return _mkdir(path);
    #else
        return mkdir(path, 0755);
    #endif
}

// 写入自评
void writeSelfReview() {
    char review[1000];  // 自评内容
    char date[100];     // 日期
    char filename[200]; // 文件名
    
    printf("请输入今天的自我评价：");
    getchar(); // 清除缓冲区
    fgets(review, sizeof(review), stdin);
    review[strcspn(review, "\n")] = 0; // 移除换行符
    
    printf("请输入今日的日期（请务必用xxxx年xx月xx日的格式输入）：");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = 0;
    
    // 构建文件名
    snprintf(filename, sizeof(filename), "./自评文件集/%s.txt", date);
    
    // 写入文件
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("文件创建失败！\n");
        return;
    }
    fprintf(file, "%s", review);
    fclose(file);
    
    printf("自评已保存到 %s\n", filename);
    
    // 询问是否继续操作
    printf("请问你是要再次输入自评，还是要查询某一天的自评呢？\n");
    printf("如果是前者，请输入1，如果是后者，请输入2：");
    
    char choice;
    scanf(" %c", &choice);
    
    if (choice == '1') {
        char additionalReview[500];
        printf("请再次输入自评，这次的自评会追加到文件中：");
        getchar();
        fgets(additionalReview, sizeof(additionalReview), stdin);
        additionalReview[strcspn(additionalReview, "\n")] = 0;
        
        file = fopen(filename, "a");
        if (file != NULL) {
            fprintf(file, "\n%s", additionalReview);
            fclose(file);
            printf("追加成功！\n");
        }
    } else if (choice == '2') {
        readSelfReview();
    }
}

// 读取自评
void readSelfReview() {
    char date[100];
    char filename[200];
    
    printf("请输入你想要查询的日期（请务必用xxxx年xx月xx日的格式输入）：");
    getchar();
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = 0;
    
    snprintf(filename, sizeof(filename), "./自评文件集/%s.txt", date);
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("您查询的文件不存在！请重新检查！\n");
        return;
    }
    
    printf("=== %s 的自评 ===\n", date);
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
    printf("==================\n");
}

// 主函数
int main() {
    // 创建目录
    if (createDirectory("自评文件集") != 0) {
        // 如果目录已存在，这也是正常的
    }
    
    char choice;
    
    while (1) {
        printf("\n=== 自评程序 ===\n");
        printf("如果你是想要写今日的自我评价，请输入a\n");
        printf("如果你是想要查询某一天的自评，请输入b\n");
        printf("退出程序请输入q\n");
        printf("请选择：");
        
        scanf(" %c", &choice);
        
        switch (choice) {
            case 'a':
            case 'A':
                writeSelfReview();
                break;
            case 'b':
            case 'B':
                readSelfReview();
                break;
            case 'q':
            case 'Q':
                printf("程序退出，再见！\n");
                return 0;
            default:
                printf("输入错误，请输入a、b或q！\n");
        }
        
        printf("按回车键继续...");
        getchar(); // 清除之前的换行符
        getchar(); // 等待用户按回车
    }
    
    return 0;
}
