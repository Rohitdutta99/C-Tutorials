#include<stdio.h>
int main()
{
    /*
    If-(int)
    int age=22;
    int *ptr=&age;
    ptr++;  // here, the datatype is int so the pointer will be incremented with 4bytes

    If-(char)
    char age=22;
    char *ptr=&age;
    ptr++;  // here, the datatype is char so the pointer will be incremented with only 1byte

    If-(float)
    float age=22;
    float *ptr=&age;
    ptr++;  // here, the datatype is float so the pointer will be incremented with 4bytes    */
/*
    char star='*';
    char *ptr=&star;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);

    int age=22;
    int *ptr1=&age;
    printf("ptr1 = %u\n",ptr1);
    ptr1++;
    printf("ptr1 = %u\n",ptr1); 

    float price=22.2;
    float *ptr2=&price;
    printf("ptr2 = %u\n",ptr2);
    ptr2++;
    printf("ptr2 = %u\n",ptr2);         */

    //we can also subtract one pointer from another
    //we can also compare 2 pointers
    int year = 22;
    int _year = 23;
    int *pointer1=&year;
    int *pointer2=&_year;
    //make sure while ckecking the difference the datatype of the pointer and the data to which the pointer is pointing like here,(year) should be same
    printf("Difference = %u\n",pointer1-pointer2); //1 integer difference will show
    pointer2=&year;
    printf("Comparison = %u\n",pointer1==pointer2); // 0 or 1 (0 for false and 1 for True)
    return 0;

}