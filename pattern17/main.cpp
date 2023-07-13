#include <iostream>

using namespace std;

void pattern14(int n)
{
        int asciiValue = 65; // 65 = A
        char c = asciiValue;
    for(int i = 0 ; i<n ; i++)
    {


        for(int j = 0 ; j <= i ;j++)
        {
            cout<<c;

        }
        cout<<endl;
        c=c+1;

    }

}

int main()
{
   int n ;
   cin >> n ;
   pattern14(n);

   return 0;
}
