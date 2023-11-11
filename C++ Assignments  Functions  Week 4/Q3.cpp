#include <iostream>
using namespace std;

void OddNumbers(int a, int b)
{
    if (a>b)
    {
        OddNumbers(b,a);
        return;
    }
    for (int i=a;i<=b;i++)
    {
        if (i%2!=0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    OddNumbers(a,b);
    return 0;
}