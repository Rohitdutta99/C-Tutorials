//arrayADT
#include<stdio.h>
#include<stdlib.h>

struct myarr{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myarr *a, int tsize, int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));

}
int main()
{
    struct myarr marks;
    return 0;
}