#include <iostream>

using namespace std;

void pattern22(int n)
{
    for(int i = 0 ; i<n ; i++)
   {
       for(int j = 0 ; j<n ; j++)
       {
           if(i == 0 || j == 0 || i == n-1 || j == n-1)  // || = or
           {
               cout<<"*";
           }
           else{cout<<" ";}
       }
       cout<<endl;
   }
}

int main()
{
   int n ;
   cin >> n ;
   pattern22(n);
   return 0;
}
