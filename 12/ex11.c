#include <stdio.h>
void perfect();
int main(){
    int i, num, sum = 0;

    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);
    perfect();
    return 0;
}
void perfect(){
  int i, num, sum = 0;
    for(i = 1; i <= num / 2; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)
    {
        printf("%d is perfect", num);
    }
    else
    {
        printf("%d is not perfect", num);
    }
}
