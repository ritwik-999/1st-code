#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main() {
    int num,n,guess=0;
    srand(time(0));
    num = rand() % 10 + 1 ;
    printf("guess the number::-");
while (n!=num)
{
    scanf("%d",&n);
    guess++;
}
printf("you have taken %d attempts",guess);
    return 0;
}