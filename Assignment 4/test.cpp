// C++ implementation of worst case linear time algorithm
// to find k'th smallest element
#include<iostream>
#include<algorithm>
#include<climits>
 
using namespace std;
int fib3 (int n)
{
    int count = 0;
    int i = 1, j=0,k=0,h=1,t=0;
        while(n>0)
        {
            if(n%2 == 1){t=j*h; j=i*h+j*k+t; i=i*k+t;count++;}
            t=h*h; h=2*k*h+t; k=k*k+t; n=n/2; count++;
        }
    cout << count << endl;
    return j;
} 

// Driver program to test above methods
int main()
{
    cout << fib3(1000) << endl;
}