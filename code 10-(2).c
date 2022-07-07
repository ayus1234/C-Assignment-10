//Program to print the squares of first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        printf("%d\n",((N+1)-i)*((N+1)-i));
    getch();
}