#include<stdio.h> 
#include<stdlib.h> 

void main(){
    int num =9;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num-1-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("%d",j+1);
        }
        for (int j = i+1; j > 0 ;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}