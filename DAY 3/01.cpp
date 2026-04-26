// Find maximum and minimum element in an array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[10]={1,4,5,2,45,10,99,10000,100,90};
    int size = 10;

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>maxVal)
        {
            maxVal=arr[i];
        }

        if (arr[i]<minVal)
        {
            minVal=arr[i];
        }
        
        
    }

    cout<<"MAX VAL: "<<maxVal<<"\n";
    cout<<"MIN VAL: "<<minVal;
    
}