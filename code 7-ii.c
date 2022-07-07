//Program to print the first N odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    i=N-1;
    while(i>=0)
    {
        printf("%d\n",2*i+1);
        i--;
    }
    getch();
}