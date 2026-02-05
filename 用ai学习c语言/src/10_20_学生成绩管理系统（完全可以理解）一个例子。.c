#include <stdio.h>

#define MAX_STUDENTS 50
#define MAX_SUBJECTS 5

// 输入成绩函数
void input_grades(int students, int subjects, int grades[students][subjects]) {
    printf("请输入%d个学生的%d门课程成绩：\n", students, subjects);
    for(int i = 0; i < students; i++) {
        printf("学生%d的成绩：", i + 1);
        for(int j = 0; j < subjects; j++) {
            scanf("%d", &grades[i][j]);
        }
    }
}

// 显示所有成绩
void display_grades(int students, int subjects, int grades[students][subjects]) {
    printf("\n所有学生成绩：\n");
    printf("学生\\课程\t");
    for(int j = 0; j < subjects; j++) {
        printf("课程%d\t", j + 1);
    }
    printf("\n");
    
    for(int i = 0; i < students; i++) {
        printf("学生%d：\t", i + 1);
        for(int j = 0; j < subjects; j++) {
            printf("%d\t", grades[i][j]);
        }
        printf("\n");
    }
}

// 计算学生平均分
void student_average(int students, int subjects, int grades[students][subjects]) {
    printf("\n学生平均分：\n");
    for(int i = 0; i < students; i++) {
        int sum = 0;
        for(int j = 0; j < subjects; j++) {
            sum += grades[i][j];
        }
        float average = (float)sum / subjects;
        printf("学生%d的平均分：%.2f\n", i + 1, average);
    }
}

// 计算课程平均分
void subject_average(int students, int subjects, int grades[students][subjects]) {
    printf("\n课程平均分：\n");
    for(int j = 0; j < subjects; j++) {
        int sum = 0;
        for(int i = 0; i < students; i++) {
            sum += grades[i][j];
        }
        float average = (float)sum / students;
        printf("课程%d的平均分：%.2f\n", j + 1, average);
    }
}

// 新增功能：查找最高分和最低分
void find_extremes(int students, int subjects, int grades[students][subjects]) {
    int max_score = grades[0][0];
    int min_score = grades[0][0];
    int max_student = 1, max_subject = 1;
    int min_student = 1, min_subject = 1;
    
    for(int i = 0; i < students; i++) {
        for(int j = 0; j < subjects; j++) {
            if(grades[i][j] > max_score) {
                max_score = grades[i][j];
                max_student = i + 1;
                max_subject = j + 1;
            }
            if(grades[i][j] < min_score) {
                min_score = grades[i][j];
                min_student = i + 1;
                min_subject = j + 1;
            }
        }
    }
    
    printf("\n成绩统计：\n");
    printf("最高分：%d (学生%d的课程%d)\n", max_score, max_student, max_subject);
    printf("最低分：%d (学生%d的课程%d)\n", min_score, min_student, min_subject);
}

int main() {
    int grades[MAX_STUDENTS][MAX_SUBJECTS];
    int student_count;
    
    printf("=== 学生成绩管理系统 ===\n");
    
    // 获取学生数量
    printf("请输入学生数量（最多%d）：", MAX_STUDENTS);
    scanf("%d", &student_count);
    
    if(student_count > MAX_STUDENTS || student_count <= 0) {
        printf("学生数量无效！\n");
        return 1;
    }
    
    // 调用功能函数
    input_grades(student_count, MAX_SUBJECTS, grades);
    display_grades(student_count, MAX_SUBJECTS, grades);
    student_average(student_count, MAX_SUBJECTS, grades);
    subject_average(student_count, MAX_SUBJECTS, grades);
    find_extremes(student_count, MAX_SUBJECTS, grades);
    
    printf("\n=== 系统运行完成 ===\n");
    return 0;
}


//这是一个函数式的程序，定义了五个功能函数，一个主函数，没有多少库函数，核心难点不是语法，而是对应的算法。我还是练的不够多，这个代码是一个榜样和例子。 
