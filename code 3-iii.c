//Program to print the first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    i=N;
    do
    {
        printf("%d\n",i);
        i--;
    }while(i>=1);
    getch();
}