#include<stdio.h>
#include<conio.h>

void main()
{
    char name[15];
    int english,math,sociology,science,hindi,total,rollNO;
    float percentage;


    //input

    printf("Enter Student Name : - ");
    scanf("%s",name);

    printf("Enter Roll NO :- ");
    scanf("%d", &rollNO);


    printf("Enter Mark Of English :-  ");
    scanf("%d",&english);

    printf("Enter Mark of Math :-  ");
    scanf("%d",&math);

    printf("Enter Mark of sociology :-  ");
    scanf("%d",&sociology);

    printf("Enter Mark if science :-  ");
    scanf("%d",&science);

    printf("Enter Mark of Hindi :- ");
    scanf("%d",&hindi);

    //Process

    total = english+math+sociology+science+hindi;
    percentage = total/5;


    //output

    printf("\n Student name : %s",name );
    printf("\n Roll NO : %d",rollNO);
    printf("\n percentage : %f",percentage);
}