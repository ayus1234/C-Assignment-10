//Program to print the first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",(N+1)-i);
        i++;
    }
    getch();
}