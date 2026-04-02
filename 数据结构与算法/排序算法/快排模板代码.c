#include <stdio.h>

// 分区函数：以最后一个元素为基准，将小于等于基准的放在左边，大于的放在右边
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // 选择最后一个元素作为基准
    int i = low - 1;        // i 指向小于等于基准的区域的最后一个元素

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            // 交换 arr[i] 和 arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // 将基准放到正确的位置（i+1）
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  // 返回基准的最终位置
}

// 快速排序递归函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // 分区，获取基准索引
        quickSort(arr, low, pi - 1);         // 递归排序左半部分
        quickSort(arr, pi + 1, high);        // 递归排序右半部分
    }
}

// 打印数组
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// 示例主函数
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("排序后数组: ");
    printArray(arr, n);
    return 0;
}