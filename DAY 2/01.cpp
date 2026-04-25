// Print all numbers from 1 to N that are divisible by both 3 and 5

#include<iostream>

using namespace std;

int main(){
    int n=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        if (i%3==0 && i%5==0)
        {
            cout << i << " ";
        }
        
        
    }

    
}