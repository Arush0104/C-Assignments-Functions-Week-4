#include <iostream>
using namespace std;
int squareAnumber(int num)
{
    return num*num;
}
void firstnsquares(int n)
{
    for (int i=1;i<=n;i++)
    {
        cout<<i<<" "<<squareAnumber(i)<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    firstnsquares(n);
    return 0;
}