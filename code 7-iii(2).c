//Program to print the first N odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d\n",(2*N+1)-2*i);
        i++;
    }while(i<=N);
    getch();
}