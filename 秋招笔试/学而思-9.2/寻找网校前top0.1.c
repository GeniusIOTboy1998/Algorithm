#include <stdio.h>
#include <stdlib.h>

int a[1000000+10];

void swap(int *arr,int i, int k) 
{
    int temp = arr[i];
    arr[i] = arr[k];
    arr[k] = temp;
}


void max_heapify(int *arr, int start, int end) 
{
    //建立父节点下标和子节点下标
    int dad = start;

    int son = dad * 2 + 1;

    while (son <= end) 
    {   //若子节点下标在范围内才做比较
        if (son + 1 <= end && arr[son] < arr[son + 1]) //先比较两个子节点大小，选择最大的
        {
            son++;
        
        }

        if (arr[dad] > arr[son]) //如果父节点大于子节点代表调整完毕,直接跳出
        {
            return;
        }   
        else 
        {   //否则交换父子节点的值再继续左右子节点值得比较
            swap(arr,dad, son);
           // printf("dad=%d--son=%d\n",dad,son);
            dad = son;
            son = dad * 2 + 1;
        }
            
    }
}

void heap_sort(int *arr, int len) 
{
    int i;
    //初始化，i从最后一个父节点开始调整
    for (i = len / 2 - 1; i >= 0; i--)
    {
        max_heapify(arr, i, len - 1);
        
    }

    for (i = len - 1; i > 0; i--) 
    {
        swap(arr,0, i);

        max_heapify(arr, 0, i - 1);
    }
}



int main(int argc, char const *argv[])
{
    // int arr[] = {5,3,8,1,6};

    //int len = sizeof(arr) / sizeof(int);

    int n; scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&a[i]);
    }

    heap_sort(a, n);

    int top = n*0.001;

    for (int i = 0; i < top; i++)
    {
        printf("%d\n", a[i]);
    }
        
    printf("\n");
    
    return 0;
}