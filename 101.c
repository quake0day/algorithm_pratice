#include <stdio.h>
#include <assert.h>
static int AA[10];
int* sort_A_B(int *k, int *j);
int main(void)
{
    int A[10] = {1,3,5};
    int *k = A;
    int B[3] = {2,4,6};
    int *j = B;
    
    sort_A_B(k,j);
    printf("%d",AA[1]);


    return 0;
}


int* sort_A_B(int *k, int *j){
    int merge_index = 0;
    int *merge_re;
    merge_re = k;
    assert(k);
    assert(j);

    while(*j)
    {
        merge_index +=1;
        j++;
    }
    j--;
    while(*k)
    {
        merge_index +=1;
        k++;
    }
    k--;
    merge_index --;

    while(merge_index >= 0){
        if(*k > *j){
            AA[merge_index] = *k;
            merge_index --;
            k --;
        }else{
            AA[merge_index]= *j;
            merge_index --;
            j--;
        }
    }

}

