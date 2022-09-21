// Create a structure to store complex numbers
#include<stdio.h>
typedef struct complex{
    int real;
    int img;
} com;
int main()
{
    com num1={5,8},*ptr=&num1;
    printf("Real part: %d\n",ptr->real);
    printf("Img part: %d\n",ptr->img);
    return 0;
}