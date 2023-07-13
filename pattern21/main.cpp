#include <iostream>

using namespace std;

void pattern21(int n)
{
    int space = 2*n-2;
    for(int i = 0 ; i< n ; i++)
     {
       // for star
       for(int j = 0 ; j <=i ; j++)
       {

           cout<<"x";

       }

       // for space
       for(int j = 0 ; j < space ; j++)
       {
           cout<<" ";
       }

       //for star
       for(int j = 0 ; j <=i ; j++)
       {

           cout<<"x";

       }
       space-=2;
       cout<<endl;
       }

       // for lower part
    for(int i = 1 ; i<= n-1 ; i++)
    {
           //for star
           for(int j = i ; j <= n-1;j++)
           {
               cout<<"x";
           }
           //for space
           for(int j = 0 ; j < 2*i ; j++)
           {
               cout<<" ";
           }
           //for star
            for(int j = i ; j <= n-1;j++)
           {
               cout<<"x";
           }
           cout<<endl;

       }

}

int main()
{
   int n ;
   cin >> n ;
   pattern21(n);
   return 0;
}
