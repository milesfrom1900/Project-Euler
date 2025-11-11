#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <math.h> 

bool IsPalindrome(int number){
    char str[12];
    sprintf(str,"%d",number);
    for (int i = 0; i < strlen(str)/2; i++)
    {
        if (str[i]!=str[strlen(str)-1-i])
        {
            return false;
        }   
    }
    return true;
}   

int GetLargestPalindromeFromProduct(int digits){
    //Returs the largest palindrome from the produi maxPct of two numbers
    int maxProduct = 0;
    int maxSum = 0;

    int iterations = 0;

    maxProduct = (int)pow(10,digits) -1;

    for (int  i = maxProduct; i > 0; i--)
    {
        for (int  j = (int)maxProduct; j*i > 0; j--)
        {
            iterations++;
            if (IsPalindrome(i*j) == true)
            {
                if (i*j > maxSum){maxSum = i*j; printf("%i\n",maxSum);} 
                break;
            }
        }
    }
    printf("Iterations: %i\n",iterations);
    return maxSum;
}

int main(){
    int n = 3;
    printf("Result: %i \n", GetLargestPalindromeFromProduct(n));
}