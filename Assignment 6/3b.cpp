#include <iostream>
#include <math.h>

using namespace std;

int reccurence (float n)
{
    if (n == 0 || n == 1)
        return 0;
    return reccurence(floor(n/2.0)) + reccurence(ceil(n/2.0)) + reccurence((n-1)) + 1;
}

int main() 
{
    for (float i = 0; i <= 200; i+=20)
    {
        printf("total of %d is: %d\n", int(i) ,reccurence(i));
    }   
}
