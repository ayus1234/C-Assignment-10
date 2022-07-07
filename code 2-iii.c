//Program to print the first N natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d\n",i);
        i++;
    }while(i<=N);
    getch();
}