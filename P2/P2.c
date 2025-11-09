#include <stdio.h>
//Sum of even numbers in Fibonacci sequence less than 4000000

int main(){
    int Sum=0, prev=2, prev2=0; //Start at 0 since 1 is not even
    while (Sum < 4000000){
        Sum += prev;
        int temp = prev;
        prev=4*prev+prev2; //=F(n-1)*4+F(n-2)
        prev2=temp;
    }
    printf("Result: %i\n", Sum);
}

/* Every third value is even
2  
3   Odd
5   Odd
8 
13  Odd
21  Odd
34
55  Odd
89  Odd 
144

Deriving function
2=0*4+0
8=2*4+0
34=8*4+2
144=34*4+8
*/
