#include <iostream>

using namespace std;

int main()
{
    int n , count = 0;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i <= n-1 ; i++)
    {
        cin>>arr[i];
    }
    /* for(int i = 0 ; i <= n-1 ; i++)
    {
        cout<<arr[i];
    } */

    for(int i = 0 ; i <= n-2 ; i++)
    {
       if(arr[i] != arr[i+1])
       {
           count++;
       }
    }
    count = count+1;
    cout<<count;
}
