#include <stdio.h>

//划分操作
int partition(int* p,int low ,int high){
    int pivot = p[low];
    while (low<high)
    {
        while (low<high&&p[high]>pivot)
        {
            --high;
        }
        p[low] = p[high];

        while (low<high&&p[low]<pivot)
        {
            ++low;
        }
        p[high] = p[low];
    }
    p[low] = pivot;
    return low;
}


//排序操作
void QuickSort (int* p,int low,int high){
    int pivotpos = partition(p,low,high);
    QuickSort(p,low,pivotpos-1);
    QuickSort(p,pivotpos+1,high);
}

int main (){
    int A[] = {0,1,2,4,2,6,8,45,6,954,10};
    QuickSort(A,1,10);
    return 0;
}