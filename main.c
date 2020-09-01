/*
  Program:c-character I/O
  Authority: Mr.Sereephap
  Data:01/09/2020
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chr;
    int a;
    printf("Enter a character: ");
    scanf("%c%d",&chr,&a);

    //printf("Enter a inter: ");
    //scanf("%d",&a);
    //when %c is used. a character is display
    printf("You entered %c",chr);

    //When %d is used. ASCII value is display
    printf("ASCII value is %d\n",chr);
    printf("You entered %d",a);
    return 0;
}
