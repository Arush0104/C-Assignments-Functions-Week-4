#include <iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
int numberofdigits(int num)
{
    int ans=0;
    while (num>0)
    {
        ans++;
        num/=10;
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;
    int numberOfDigits=numberofdigits(num);
    cout<<square(numberOfDigits)<<endl;
    return 0;
}