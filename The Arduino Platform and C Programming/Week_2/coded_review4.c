#include <stdio.h>

int main(){
    int i, num1 = 0, num2=1, num;

    for (i=0; i<6; i++){
        num = num1+num2;
        printf("%d", num);
        printf(",");
        num1 = num2;
        num2 = num;
    }


}