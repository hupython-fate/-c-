#include <stdio.h>

void arr_print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}


int main(void)
{
    //用户输入第一个数字，代表要输入的数字个数，然后下一行输入n个数字。
    //输出排序好的n个数字。
    //比如，
    //3
    //3 7 2
    //输出
    //2 3 7
    //要用插入排序算法。
    //就像是抽扑克牌一样。

    int n;
    scanf("%d",&n);
    int arr[n];//变长数组。
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //进行插入排序。
    //从小到大排
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            int k=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=k;            
        }
    }

    arr_print(arr,n);    
    return 0;
}