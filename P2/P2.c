#include <stdio.h>
int main(){
    int Num=1;
    int prevNum=1;
    int tempNum=0;
    int Sum=0;
    while (Num < 4000000){
        if(Num%2==0){Sum+=Num;}
        tempNum=Num;
        Num=Num+prevNum;
        prevNum=tempNum;
    }
    printf("Result: %i\n", Sum);
}