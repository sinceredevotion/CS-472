#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    for (int i = 0; i < 17; i++)
    {
        printf("%d log_2 %d is: %d\n", i, i, i * log2f(i));
    }   
    printf("log_2 is: %d\n",log2f(2));
}
