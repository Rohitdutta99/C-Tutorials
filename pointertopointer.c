#include<stdio.h>
int main()
{
    /*
    int age=22;
    int *ptr=&age;
    int **pptr=&ptr;

    printf("%d\n",age);
    printf("%u\n",*ptr);
    printf("%u\n",*(*pptr));
    */
   /*
    float price=100.00;
    float *ptr=&price;
    float **pptr=&ptr;
    */

   //Q) Print the value of 'i' from its pointer to pointer
   int i=5;
   int *ptr=&i;
   int **pptr=&ptr;

   printf("%d\n",**pptr);

   /*
   CALL BY VALUE- we pass value of variable as argument
   CALL BY REFERENCE- we pass address of variable as argument
   */
  

}
