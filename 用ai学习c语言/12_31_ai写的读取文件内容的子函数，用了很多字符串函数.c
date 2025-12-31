stu *readfile(const char *filename)
{
    FILE *p;
    if((p = fopen(filename, "r")) == NULL)
    {
        printf("无法打开文件 %s\n", filename);
        return NULL;
    }
    
    // 读取并忽略标题行（如果不需要的话）
    char header[256];
    fgets(header, sizeof(header), p);
    
    stu *head = NULL, *tail = NULL;
    stu *new_node = NULL;
    char line[256];
    
    // 逐行读取，更安全
    while(fgets(line, sizeof(line), p) != NULL)
    {
        // 移除换行符
        line[strcspn(line, "\r\n")] = 0;
        
        // 跳过空行
        if(strlen(line) == 0) continue;
        
        // 分配新节点
        new_node = (stu*)malloc(sizeof(stu));
        if(new_node == NULL)
        {
            printf("内存分配失败\n");
            fclose(p);
            return head;  // 返回已读取的部分
        }
        
        // 初始化节点
        memset(new_node, 0, sizeof(stu));
        
        // 解析行数据
        // 假设格式：姓名,年龄,性别,成绩1,成绩2,...,成绩9
        char *token = strtok(line, ",");
        if(token == NULL) continue;
        
        // 复制姓名（注意防止溢出）
        strncpy(new_node->name, token, sizeof(new_node->name)-1);
        
        // 读取年龄
        token = strtok(NULL, ",");
        if(token) new_node->age = atoi(token);
        
        // 读取性别
        token = strtok(NULL, ",");
        if(token) new_node->nan_or_nv = atoi(token);
        
        // 读取9个成绩
        for(int j = 0; j < 9; j++)
        {
            token = strtok(NULL, ",");
            if(token) new_node->chengji[j] = atoi(token);
        }
        
        // 添加到链表
        new_node->next = NULL;
        
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
    }
    
    fclose(p);
    return head;
}
