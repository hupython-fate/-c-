void pai_xu(stu *head) {
    if(head == NULL || head->next == NULL) return;
    
    int swapped;
    stu *ptr1;
    stu *lptr = NULL;  // 记录上一轮排序的最后一个节点
    
    do {
        swapped = 0;
        ptr1 = head;  // 每轮从头开始
        
        // 遍历到上一轮排序的最后一个节点的前一个
        while(ptr1->next != lptr) {
            // 比较当前节点和下一个节点
            if(ptr1->sum < ptr1->next->sum) {  // 降序排列
                // 交换两个节点的所有数据
                // 交换姓名
                char temp_name[30];
                strcpy(temp_name, ptr1->name);
                strcpy(ptr1->name, ptr1->next->name);
                strcpy(ptr1->next->name, temp_name);
                
                // 交换年龄
                int temp_age = ptr1->age;
                ptr1->age = ptr1->next->age;
                ptr1->next->age = temp_age;
                
                // 交换性别
                int temp_gender = ptr1->nan_or_nv;
                ptr1->nan_or_nv = ptr1->next->nan_or_nv;
                ptr1->next->nan_or_nv = temp_gender;
                
                // 交换各科成绩
                for(int i = 0; i < 9; i++) {
                    int temp_score = ptr1->chengji[i];
                    ptr1->chengji[i] = ptr1->next->chengji[i];
                    ptr1->next->chengji[i] = temp_score;
                }
                
                // 交换总分
                int temp_sum = ptr1->sum;
                ptr1->sum = ptr1->next->sum;
                ptr1->next->sum = temp_sum;
                
                swapped = 1;  // 标记发生了交换
            }
            ptr1 = ptr1->next;  // 移动到下一个节点
        }
        lptr = ptr1;  // 更新lptr为当前轮的最后一个节点
    } while(swapped);  // 如果发生交换，继续下一轮
}
