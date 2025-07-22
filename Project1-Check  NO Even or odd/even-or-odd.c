#include<stdio.h>
#include<conio.h>

int main(){
    
    int number;
    //clrscr();

    printf("Enter Number for chrck even or odd");
    scanf("%d",&number);

    if(number % 2 == 0){
        printf("even");
    } else{
        printf("Odd");
    }

    //getch();
    return 0;
}