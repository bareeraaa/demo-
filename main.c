#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mynum;
    printf("Hello world!\n");
    printf("Enter a number:\n");
    scanf("%d",&mynum);
    if (mynum%2==0){
        printf("even");
    }else{
    printf("odd");
    }
    return 0;
}
