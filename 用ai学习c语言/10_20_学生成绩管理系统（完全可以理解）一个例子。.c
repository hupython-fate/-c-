#include <stdio.h>

#define MAX_STUDENTS 50
#define MAX_SUBJECTS 5

// ����ɼ�����
void input_grades(int students, int subjects, int grades[students][subjects]) {
    printf("������%d��ѧ����%d�ſγ̳ɼ���\n", students, subjects);
    for(int i = 0; i < students; i++) {
        printf("ѧ��%d�ĳɼ���", i + 1);
        for(int j = 0; j < subjects; j++) {
            scanf("%d", &grades[i][j]);
        }
    }
}

// ��ʾ���гɼ�
void display_grades(int students, int subjects, int grades[students][subjects]) {
    printf("\n����ѧ���ɼ���\n");
    printf("ѧ��\\�γ�\t");
    for(int j = 0; j < subjects; j++) {
        printf("�γ�%d\t", j + 1);
    }
    printf("\n");
    
    for(int i = 0; i < students; i++) {
        printf("ѧ��%d��\t", i + 1);
        for(int j = 0; j < subjects; j++) {
            printf("%d\t", grades[i][j]);
        }
        printf("\n");
    }
}

// ����ѧ��ƽ����
void student_average(int students, int subjects, int grades[students][subjects]) {
    printf("\nѧ��ƽ���֣�\n");
    for(int i = 0; i < students; i++) {
        int sum = 0;
        for(int j = 0; j < subjects; j++) {
            sum += grades[i][j];
        }
        float average = (float)sum / subjects;
        printf("ѧ��%d��ƽ���֣�%.2f\n", i + 1, average);
    }
}

// ����γ�ƽ����
void subject_average(int students, int subjects, int grades[students][subjects]) {
    printf("\n�γ�ƽ���֣�\n");
    for(int j = 0; j < subjects; j++) {
        int sum = 0;
        for(int i = 0; i < students; i++) {
            sum += grades[i][j];
        }
        float average = (float)sum / students;
        printf("�γ�%d��ƽ���֣�%.2f\n", j + 1, average);
    }
}

// �������ܣ�������߷ֺ���ͷ�
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
    
    printf("\n�ɼ�ͳ�ƣ�\n");
    printf("��߷֣�%d (ѧ��%d�Ŀγ�%d)\n", max_score, max_student, max_subject);
    printf("��ͷ֣�%d (ѧ��%d�Ŀγ�%d)\n", min_score, min_student, min_subject);
}

int main() {
    int grades[MAX_STUDENTS][MAX_SUBJECTS];
    int student_count;
    
    printf("=== ѧ���ɼ�����ϵͳ ===\n");
    
    // ��ȡѧ������
    printf("������ѧ�����������%d����", MAX_STUDENTS);
    scanf("%d", &student_count);
    
    if(student_count > MAX_STUDENTS || student_count <= 0) {
        printf("ѧ��������Ч��\n");
        return 1;
    }
    
    // ���ù��ܺ���
    input_grades(student_count, MAX_SUBJECTS, grades);
    display_grades(student_count, MAX_SUBJECTS, grades);
    student_average(student_count, MAX_SUBJECTS, grades);
    subject_average(student_count, MAX_SUBJECTS, grades);
    find_extremes(student_count, MAX_SUBJECTS, grades);
    
    printf("\n=== ϵͳ������� ===\n");
    return 0;
}


//����һ������ʽ�ĳ��򣬶�����������ܺ�����һ����������û�ж��ٿ⺯���������ѵ㲻���﷨�����Ƕ�Ӧ���㷨���һ������Ĳ����࣬���������һ�����������ӡ� 
