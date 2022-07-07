//Program to print MySirG N times on the screen

#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("MySirG\n");
        i++;
    }
    getch();
}