#include <iostream>

using namespace std;

void pattern20(int n)
{
    for(int i = 0 ; i< n ; i++)
   {
       // for star
       for(int j = i ; j < n ; j++)
       {

           cout<<"x";

       }

       // for space
       for(int j = 0 ; j < 2* i ; j++)
       {
           cout<<" ";
       }

       //for star
       for(int j = i ; j < n ; j++)
       {

           cout<<"x";
       }



       cout<<endl;
       //for star

       //for space

       //for star

    }
     int space = 2*n-2;
     for(int i = 0 ; i< n ; i++)
     {

         //for star

         for(int j = 0 ; j <=i ; j ++)
         {
            cout<<"x";
         }
         //for space
         for(int j = 0 ; j<space;j++)
         {
             cout<<" ";
         }

         //for star
         for(int j = 0 ; j <=i ; j ++)
         {
            cout<<"x";
         }
         space=space-2;
         cout<<endl;
     }
}

int main()
{
   int n ;
   cin >> n ;
   pattern20(n);
   return 0;
}
