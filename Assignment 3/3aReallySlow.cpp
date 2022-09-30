#include <iostream>
#include <vector>
using namespace std;

double arr[10000000];


double quicksort (double n)
{
    if (n == 0 || n == 1)
        return 0;
    else
    {
        double result = n - 1;
        double sum = 0;        
        for (int i = 2; i < n; i++)
        {
            if (arr[i] == 0)
                sum += quicksort(i);
            else
                sum += arr[i];
        }
        arr[(int)n] = (result + ((2/n) * sum));
        return (result + ((2/n) * sum));
    }
        
        
}

int main() {
    for (int j = 10000; j <= 1000000; j+= 10000)
    {
        cout << j << ": " << quicksort (double(j)) << endl;
    }

    return 0;
}