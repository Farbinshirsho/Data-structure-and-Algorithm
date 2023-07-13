
#include <iostream>

using namespace std;

void pattern18(int n)
{
    for(int i = 0 ; i< n ; i++)
   {
       for(int j = 0 ; j< n - i - 1 ; j++)
       {
           cout<<" ";
       }
       char c = 'A';
       int breakpoint = ((2*i+1)/2);
       for(int k = 0 ; k< 2*i+1 ; k++)
       {
          cout<<c;
          if(k<breakpoint) c++;
          else c--;
       }
       for(int l = 0 ; l< n - i - 1 ; l++)
       {
           cout<<" ";
       }
       cout<<endl;


   }
}

int main()
{
   int n ;
   cin >> n ;
   pattern18(n);
   return 0;
}
