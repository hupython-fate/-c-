`qsort()` 是 C 语言标准库 `<stdlib.h>` 中提供的快速排序函数，可以对任意类型的数组进行排序。它的核心思想是通过一个比较函数来确定元素的顺序，因此具有很好的通用性。

---

## 1. 函数原型
```c
void qsort(void *base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *));
```

## 2. 参数解释
- **`base`**  
  指向待排序数组首元素的指针，类型为 `void*`，可以传入任何类型的数组。
- **`nmemb`**  
  数组中元素的个数（类型为 `size_t`，无符号整数）。
- **`size`**  
  每个元素的大小（以字节为单位），通常用 `sizeof(元素类型)` 获得。
- **`compar`**  
  指向比较函数的指针，该函数由用户自己编写，用于决定排序的规则。  
  比较函数必须返回：
  - **负值**：第一个参数小于第二个参数（应排在前面）；
  - **零**：两个参数相等；
  - **正值**：第一个参数大于第二个参数（应排在后面）。

---

## 3. 比较函数的编写规则
比较函数的两个参数都是 `const void*` 类型，使用时需要先转换为实际的指针类型，再解引用取值或进行比较。例如：

```c
int myCompare(const void *a, const void *b) {
    // 将 void* 转换为实际的指针类型（例如 int*），再解引用
    int ia = *(int*)a;
    int ib = *(int*)b;
    return ia - ib;   // 升序排列
    // 若想降序，可以返回 ib - ia
}
```

> **注意**：对于浮点数、结构体等复杂类型，应避免直接做减法（可能产生截断或精度问题），而是采用明确的比较逻辑。

---

## 4. 常见示例

### 4.1 排序整型数组（升序）
```c
#include <stdio.h>
#include <stdlib.h>

int cmpInt(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), cmpInt);

    for (size_t i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
```
输出：`5 7 23 32 34 62`

### 4.2 排序浮点型数组（注意精度）
```c
int cmpDouble(const void *a, const void *b) {
    double da = *(double*)a;
    double db = *(double*)b;
    if (da < db) return -1;
    if (da > db) return 1;
    return 0;
}
```

### 4.3 排序字符串数组（按字典序）
字符串数组实际上是一个 `char*` 数组，每个元素是指向字符串首字符的指针。比较时需要比较字符串内容，可以使用 `strcmp`：

```c
#include <string.h>

int cmpString(const void *a, const void *b) {
    // a 和 b 是指向指针的指针，即 char**
    char *sa = *(char**)a;
    char *sb = *(char**)b;
    return strcmp(sa, sb);
}

// 使用示例
char *names[] = {"Tom", "Alice", "Bob", "Charlie"};
size_t n = sizeof(names) / sizeof(names[0]);
qsort(names, n, sizeof(char*), cmpString);
```
结果：`"Alice" "Bob" "Charlie" "Tom"`

### 4.4 排序结构体（例如按成绩）
```c
typedef struct {
    char name[20];
    int score;
} Student;

int cmpStudent(const void *a, const void *b) {
    const Student *sa = (const Student*)a;
    const Student *sb = (const Student*)b;
    // 按成绩升序
    return sa->score - sb->score;
    // 若成绩相同，可按姓名再排： if (sa->score == sb->score) return strcmp(sa->name, sb->name);
}

Student stu[] = {{"John", 85}, {"Alice", 92}, {"Bob", 76}};
qsort(stu, 3, sizeof(Student), cmpStudent);
```

---

## 5. 注意事项
- **类型安全**：比较函数中一定要正确转换 `const void*` 为实际类型，否则会得到错误结果甚至程序崩溃。
- **稳定性**：`qsort` 是不稳定的排序，即相等元素的相对顺序在排序后可能改变。若需要稳定排序，可考虑其他方法（如归并排序）。
- **性能**：`qsort` 通常实现为快速排序，平均时间复杂度 O(n log n)，最坏情况下可能退化为 O(n²)。标准库通常会进行优化，如采用三路划分或混合排序，以降低退化概率。
- **比较函数返回值**：并非必须返回 -1、0、1，只要符合正/负/零即可，但有些实现会利用返回值的大小进行优化，因此最好规范返回 -1、0、1 或直接用差值（适用于整型且不会溢出）。
- **数组边界**：确保传入的 `nmemb` 和 `size` 正确，否则可能导致越界访问。

---

## 6. 总结
`qsort` 是 C 语言中处理排序问题的利器，通过自定义比较函数可以灵活地对各种数据类型的数组进行排序。掌握它的用法，可以避免重复造轮子，让代码更简洁高效。
