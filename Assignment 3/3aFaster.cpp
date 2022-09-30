#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double arr[10000000];
double sumArr[10000000];
int highestSum = 2;


double quicksort (double n)
{
    if (n == 0 || n == 1)
        return 0;
    else
    {
        double sum;
        double result = n - 1;
        if (n <= highestSum)
            sum = sumArr [(int)n];
        else
            sum = sumArr[highestSum];            
        for (int i = highestSum; i < n; i++)
        {
            if (arr[i] == 0)
                sum += quicksort(i);
            else
                sum += arr[i];
        }
        sumArr[(int)n] = sum;
        highestSum = max(highestSum, (int)n);
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