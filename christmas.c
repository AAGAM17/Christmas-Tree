#include <stdio.h> 
#include <stdlib.h> 
#define RefRate 40000 
#define randomness 5 

void clrscr() 
{ 
    system("@cls||clear"); 
} 

void Leaf() 
{ 
    char leaftypes[5] = { '#', '*', '+', 'o', 'J' }; 
    int temp = rand() % randomness;

    if (temp == 1) 
        printf("\033[32m%c \033[0m", leaftypes[rand() % 5]);
    else
        printf("\033[31m%c \033[0m", leaftypes[1]); 
}

void triangle(int f, int n, int toth) 
{ 
    int i, j, k = 2 * toth - 2; 

    for (i = 0; i < f - 1; i++) 
        k--; 

    for (i = f - 1; i < n; i++) { 

        for (j = 0; j < k; j++) 
            printf(" "); 

        k = k - 1; 

        for (j = 0; j <= i; j++) 
            Leaf(); 

        printf("\n"); 
    } 
} 

void printLog(int n) 
{ 
    int i, j, k = 2 * n - 4; 

    for (i = 1; i <= 6; i++) { 

        for (j = 0; j < k; j++) 
            printf(" "); 

        for (j = 1; j <= 6; j++) 
            printf("\033[33m#\033[0m");

        printf("\n"); 
    } 
} 

int main() 
{ 
    srand(0); 
    int ht = 6; 
    int iterations = 0;

    while (1) { 
        clrscr();
        printf("\n*********MERRY CHRISTMAS*********\n\n"); 

        int start = 1, stop = 0, diff = 3; 
        while (stop < ht + 1) { 
            stop = start + diff; 
            triangle(start, stop, ht); 
            diff++; 
            start = stop - 2; 
        } 

        printLog(ht); 
        iterations++; 
        if (iterations >= 100) { 
            break;
        }
    } 
    return 0; 
}