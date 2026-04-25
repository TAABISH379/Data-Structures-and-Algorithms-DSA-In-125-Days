// Calculate the sum of all numbers from 1
// 1 to N that are evenly divisible by 3.

#include<iostream>

using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        if (n%3 == 0)
        {
            sum+=i;
        }

        
    }
    cout<< sum;
    




}