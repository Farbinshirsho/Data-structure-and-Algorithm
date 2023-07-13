#include <iostream>

using namespace std;

void pattern14(int n)
{

    for(int i = 0 ; i<n ; i++)
    {

        int asciiValue = 65; // 65 = A
        char c = asciiValue;
        for(int j = 0 ; j >n ;j++)
        {
            cout<<c;
            c = c+1;

            }

        cout<<endl;



    }

}

int main()
{
   int n ;
   cin >> n ;
   pattern14(n);


   return 0;
}
