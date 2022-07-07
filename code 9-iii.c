//Program to print the cubes of first N natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d\n",i*i*i);
        i++;
    }while(i<=N);
    getch();
}