#include <stdio.h>
ss
int main() {
    // Write C code here
    float a,b,temb;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    temb=a;
    a=b;
    b=temb;
    printf("After swapping, value of a=%f \n",a);
    printf("After swapping, value of b=%f ",b);


}
