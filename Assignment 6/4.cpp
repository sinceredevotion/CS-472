#include <iostream>
#include <math.h>

using namespace std;

bool primality (int n, int a)
{
    if (pow(a,(n-1) == 1 % n))
        return true;
    return false;
}

int main() 
{
        printf("The answer is : %d\n", primality(281,2));
}
