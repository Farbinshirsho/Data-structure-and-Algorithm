#include <iostream>

using namespace std;

void BubbleSort(int arr[] ,  int n)
{
    //int temp;
    for(int i = n-1 ; i >= 1 ; i--)
    {
        int didSwap = 0 ;
        for(int j = 0 ; j <= i-1 ; j++)
        {
            if(arr[j] >  arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }

        }
         if(didSwap == 0)
            {
                break;
            }
       // cout<<"runs";
    }
}

int main()
{
   int n;
   cin>>n;

   int arr[n];


   for(int i = 0 ; i < n ; i++)
   {
       cin>>arr[i];
   }

   BubbleSort(arr ,n);

   for(int i = 0 ; i < n ; i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}
