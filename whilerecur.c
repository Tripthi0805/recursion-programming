#include <stdio.h>
void digit(int a)
{
    if(a==10)
    {
        return;
    }
    int digit=a%10;
    printf("%d\n",digit);
    a=a/10;
    digit (a);
}
int main() {
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    digit(int a);
    printf("digit",a);
    return 0;
}