#include <iostream>

using namespace std;

void pattern22(int n)
{
    for(int i = 0 ; i<(2*n-1) ; i++)
   {
       for(int j = 0 ; j<(2*n-1); j++)
       {
           if(i == 0 || j == 0 || i == (2*n-1)-1 || j == (2*n-1)-1)  // || = or
           {
               cout<<"4"<<" ";
           }
           else if(i == 1 || j == 1 || i == (2*n-1)-2 || j == (2*n-1)-2)
           {
               cout<<"3"<<" ";
           }
           else if(i == 2 || j == 2 || i == (2*n-1)-3 || j == (2*n-1)-3)
           {
               cout<<"2"<<" ";
           }
           else if(i == 3 || j == 3 || i == (2*n-1)-4 || j == (2*n-1)-4)
           {
               cout<<"1"<<" ";
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
