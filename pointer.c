#include<stdio.h>
int main()
{
    int age=22;
    int *ptr= &age;
    int _age=*ptr;
    char star= '*';
    char *ptrchar=&star;
    float price=100.50;
    float *ptrfloat=&price;
    
    /*printf("%d \n",*(&age));

    printf("%u \n",ptr);
    
    printf("%u \n",_age);
    
    printf("%c \n",star);
    
    printf("%u \n",ptrchar);
    
    printf("%f \n",price);
    
    printf("%u \n",ptrfloat);*/

    //value printing through pointer
    printf("%d\n",age);
    printf("%d\n",*ptr);//value at address ptr
    printf("%d\n",*(&age));// value at address of address of age
    

}