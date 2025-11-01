#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>  // ���ڴ���Ŀ¼

// ����Ŀ¼
int createDirectory(const char *path) {
    #ifdef _WIN32
        return _mkdir(path);
    #else
        return mkdir(path, 0755);
    #endif
}

// д������
void writeSelfReview() {
    char review[1000];  // ��������
    char date[100];     // ����
    char filename[200]; // �ļ���
    
    printf("�����������������ۣ�");
    getchar(); // ���������
    fgets(review, sizeof(review), stdin);
    review[strcspn(review, "\n")] = 0; // �Ƴ����з�
    
    printf("��������յ����ڣ��������xxxx��xx��xx�յĸ�ʽ���룩��");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = 0;
    
    // �����ļ���
    snprintf(filename, sizeof(filename), "./�����ļ���/%s.txt", date);
    
    // д���ļ�
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("�ļ�����ʧ�ܣ�\n");
        return;
    }
    fprintf(file, "%s", review);
    fclose(file);
    
    printf("�����ѱ��浽 %s\n", filename);
    
    // ѯ���Ƿ��������
    printf("��������Ҫ�ٴ���������������Ҫ��ѯĳһ��������أ�\n");
    printf("�����ǰ�ߣ�������1������Ǻ��ߣ�������2��");
    
    char choice;
    scanf(" %c", &choice);
    
    if (choice == '1') {
        char additionalReview[500];
        printf("���ٴ�������������ε�������׷�ӵ��ļ��У�");
        getchar();
        fgets(additionalReview, sizeof(additionalReview), stdin);
        additionalReview[strcspn(additionalReview, "\n")] = 0;
        
        file = fopen(filename, "a");
        if (file != NULL) {
            fprintf(file, "\n%s", additionalReview);
            fclose(file);
            printf("׷�ӳɹ���\n");
        }
    } else if (choice == '2') {
        readSelfReview();
    }
}

// ��ȡ����
void readSelfReview() {
    char date[100];
    char filename[200];
    
    printf("����������Ҫ��ѯ�����ڣ��������xxxx��xx��xx�յĸ�ʽ���룩��");
    getchar();
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = 0;
    
    snprintf(filename, sizeof(filename), "./�����ļ���/%s.txt", date);
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("����ѯ���ļ������ڣ������¼�飡\n");
        return;
    }
    
    printf("=== %s ������ ===\n", date);
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
    printf("==================\n");
}

// ������
int main() {
    // ����Ŀ¼
    if (createDirectory("�����ļ���") != 0) {
        // ���Ŀ¼�Ѵ��ڣ���Ҳ��������
    }
    
    char choice;
    
    while (1) {
        printf("\n=== �������� ===\n");
        printf("���������Ҫд���յ��������ۣ�������a\n");
        printf("���������Ҫ��ѯĳһ���������������b\n");
        printf("�˳�����������q\n");
        printf("��ѡ��");
        
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
                printf("�����˳����ټ���\n");
                return 0;
            default:
                printf("�������������a��b��q��\n");
        }
        
        printf("���س�������...");
        getchar(); // ���֮ǰ�Ļ��з�
        getchar(); // �ȴ��û����س�
    }
    
    return 0;
}
