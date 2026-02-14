#include <stdio.h>
void digit(int a)
{
    if(a==0)
    {
        return;
    }
    int digit1=a%10;
    printf("%d\n",digit1);
    a=a/10;
    digit(a);
}
int main() {
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    digit(a);
    return 0;

}
