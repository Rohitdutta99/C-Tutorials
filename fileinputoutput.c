// File input output
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr= fopen("Test.txt","r");
    //char ch[10];
    //for multiple char/ string or integers or floats
    /*fscanf(fptr,"%s",&ch);
    printf("Character is: %s\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is: %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is: %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is: %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character is: %c\n",ch);
    */
   /*
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'P'); 
    fprintf(fptr,"%c",'P');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'E');
   */

   //for single char or integers or floats
    /*
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    */
    
/*
    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('G',fptr);
    fputc('O',fptr);
  */  

    char ch;
    ch= fgetc(fptr);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch= fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
}