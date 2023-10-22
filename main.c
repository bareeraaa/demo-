#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mynum;
    int mynum1;
    printf("Enter first number: \n");
    scanf("%d",&mynum);
    printf("Enter second number: \n");
    scanf("%d",&mynum1);
    if (mynum>5 && mynum1>5){
        printf("%d",mynum+mynum1);
    }else if ((mynum<5&&mynum1>5)||(mynum>5&&mynum1<5)){
    printf("%d",mynum1*mynum);
      }else if (mynum<5 && mynum1<5){
      printf("%d",mynum+1);
       printf("%d",mynum1+1);
      } else{
      printf("hello world");
      }


    return 0;
}
