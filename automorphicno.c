#include<stdio.h>

int checkAutomorphic(int num)
{
    int square = num * num;
    
    while (num > 0)
    {
        if (num % 10 != square % 10)
            return 0;
        
        // Reduce N and square
        num = num / 10;
        square = square / 10;
    }
    return 1;
}

int main()
{
    //enter value
    int num;
    scanf("%d",&num);
    
    //checking condition
    if(checkAutomorphic(num))
        printf("Automorphic"); 
    else
        printf("Not Automorphic");
    return 0;
}
