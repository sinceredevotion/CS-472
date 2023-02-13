#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int weights [] = {7,2,3,6,8};
    int capacity = 14;
    int len = sizeof(weights)/sizeof(weights[0]);
    int row = len + 1;
    int col = capacity + 1;
    bool arr [6][15];

    arr[0][0] = true;
    for(int i = 1; i <= len; i++)
    {
        arr[i][0] = true;
        arr[0][i] = false;
    }

    for (int r = 1; r <= len; r++)
    {
        for (int c = 1; c <= capacity; c++)
        {
            if (c < weights[r - 1])
                arr[r][c] = arr[r - 1][c];
            else if (c >= weights[r - 1])
                arr[r][c] = arr[r - 1][c] || arr[r - 1][c - weights[r - 1]];
        }
    }

    if (arr[len][capacity])
        printf("Found a subset where the weights exactly add up to the capacity\n");
    else
        printf("Did not find a subset where the weights exactly add up to the capacity\n");    
}
