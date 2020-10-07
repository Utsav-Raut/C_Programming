#include <stdio.h>
#include <string.h>
void qsort1(int [], int, int);
main(){
    int v[] = {9, 3, 4, 6, 7, 1};
    qsort1(v, 0, 5);
    return 0;
}
void qsort1(int v[], int left, int right){
    int i, last;

    void swap(int v[], int i, int j);
    if (left >= right)
        return;
    swap(v, left, (left+right)/2);
    
    last = left;
    for(i=left+1; i<=right; i++){
        if(v[i] <= v[last])
            swap(v, ++last, i);
    }
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
    
}

void swap(int v[], int i, int j){
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}