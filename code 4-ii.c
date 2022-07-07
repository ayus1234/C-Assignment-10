//Program to print the first N even natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",2*i);
        i++;
    }
    getch();
}