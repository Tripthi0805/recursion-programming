#include <stdio.h>
void factor(int i,int a)
{
    if(i>a)
    {
        return;
    }
    if(a%i==0)
    {
        printf("%d is a factor  \n",i);
    }
    factor(i+1,a);
}
int main() {
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    factor(1,a);
    return 0;
}