#include <iostream>

using namespace std;

void pattern5(int n)
{
    for(int i = n ; i> 0 ; i--)
   {
       for(int j = 0 ; j<i ; j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
}

int main()
{
   int n ;
   cin >> n ;
   pattern5(n);
   return 0;
}
