//Program to print the squares of first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    do
    {
        printf("%d\n",((N+1)-i)*((N+1)-i));
        i++;
    }while(i<=N);
    getch();
}